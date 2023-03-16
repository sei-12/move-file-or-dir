#include <stdio.h>

int join_string(char* A,char* B){
    int buf_size = (strchr(A,'\0') - &A) + 
                   (strchr(B,'\0') - &B);
    
    char path[buf_size];

    sprintf(path,"%s%s",A,B);
    printf("%s\n",path);
}

int main(int argc, char const *argv[]){
    join_string("hello"," world");

    return 0;
}
