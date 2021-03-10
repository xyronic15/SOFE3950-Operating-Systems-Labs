#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[]){

    // printf("working");
    printf("%s\n", getcwd(0, 0));
    chdir("test/test1");
    printf("%s\n", getcwd(0, 0));
}