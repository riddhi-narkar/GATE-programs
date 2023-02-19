#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{ 
    int a = 0;
    // make two process which run same
    // program after this instruction
    fork();
  
    printf("number of times fork() was called %d\n", ++a);
    return 0;
}