#include <stdio.h>
#include <string.h>


int cal_jointed_size(char* A,char* B){
    return (strchr(A,'\0') - A) + (strchr(B,'\0') - B);
}


// すでに存在している場合はエラー
int shell_move(char* from_dir,char* to_dir,char* name){
    char path[cal_jointed_size(from_dir,name)];

    sprintf(path,"%s%s",from_dir,name);

}

int main(int argc, char const *argv[]){
    join_string("hello"," world");

    return 0;
}
