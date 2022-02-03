#include<sys/types.h>
#include <sys/wait.h>
#include<stdio.h>  
#include<string.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{    
int a,b,c,d[2];   
 pipe(d);   
 c=fork(); 
   if(c==0)    
    {      
      
      printf("\nEnter No (Parent process) :\n");    
      scanf("%d",&a);    
      close(d[0]);      
      write(d[1], &a, sizeof(int));       
      
    }    
    else
    {      
      close(d[1]);    
      read(d[0], &b, sizeof(int));     
      printf("\nReceived number (Child process): %d\n",b);
      exit(0);  
    }
}
