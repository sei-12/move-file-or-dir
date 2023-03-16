#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <sys/stat.h>

bool path_exists(char* path){
    struct stat st;
    if(stat(path,&st) == 0){
        return true;
    }else{
        return false;
    }
}

int cal_jointed_size(char* A,char* B){
    return (strchr(A,'\0') - A) + (strchr(B,'\0') - B);
}

// フォルダの最後には/をつける
int shell_move(char* from_dir,char* to_dir,char* name){
    if(*(strchr(from_dir,'\0') - 1) != '/' ||
       *(strchr(to_dir  ,'\0') - 1) != '/'){
        printf("引数:*_dirは\"*/\"である必要があります\n");
        return -1;
    }

    if(path_exists(to_dir) == false){
        printf("to dir not exists\n");
        return -1;
    }

    char from_path[cal_jointed_size(from_dir,name)];
    char to_path  [cal_jointed_size(to_dir  ,name)];

    sprintf(from_path,"%s%s",from_dir,name);
    sprintf(to_path  ,"%s%s",to_dir  ,name);

    if(path_exists(from_path) == false){
        printf("from path not exists\n");
        return -1;
    }
    if(path_exists(to_path)){
        printf("to path not empty\n");
        return -1;
    }
    
    rename(from_path,to_path);

    return 0;
}

int main(int argc, char const *argv[]){

    return 0;
}
