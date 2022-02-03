#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
int main(int arg1, char **arg2)
{
  int n;
  if(arg1==1){
    printf("\nArguments missing..\n");
    exit(0);
  }
  n = atoi(arg2[1]);
  if(n <= 0){
    printf("\nPositive interger required..\n");
    exit(0);
  }
  if(fork() == 0){
    while(n > 1){
      printf("%d ", n);
      if(n %2 == 0)
        n = n / 2;
      else
        n = 3 * n + 1; 
    }
 printf("1\n\n");
  }
  else{
    wait(NULL);
  }
  return 0;
}
