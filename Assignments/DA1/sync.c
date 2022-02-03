
#include<stdio.h> 
#include<sys/wait.h> 
#include<unistd.h> 

int main() 
{ 
    printf("\n19BCE2250 Ishan Jogalekar");
	if (fork()== 0) 
		printf("\nThis is child Process."); 
	else
	{ 
		printf("\nThis is parent Process."); 
		wait(NULL); 
		printf("\nChild process finished."); 
	} 

	printf("Exit\n"); 
	return 0; 
} 
