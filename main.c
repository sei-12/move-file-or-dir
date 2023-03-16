#include <stdio.h>
#include <string.h>


int cal_jointed_size(char* A,char* B){
    return (strchr(A,'\0') - A) + (strchr(B,'\0') - B);
}

int shell_move(char* from_dir,char* to_dir,char* name){
    if(path_exists(to_dir) == false){
        return -1;
    }

    char from_path[cal_jointed_size(from_dir,name)];
    char to_path  [cal_jointed_size(to_dir  ,name)];

    sprintf(from_path,"%s%s",from_dir,name);
    sprintf(to_path  ,"%s%s",to_dir  ,name);

    if(path_exists(from_path) == false){
        return -1;
    }
    if(path_exists(to_path)){
        return -1;
    }
    
    rename(from_path,to_path);

    return 0;
}

int main(int argc, char const *argv[]){
    join_string("hello"," world");

    return 0;
}
