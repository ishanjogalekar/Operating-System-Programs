#include<sys/types.h>
#include<sys/shm.h>
#include<stdio.h>
#include <stdlib.h>
#include<unistd.h>
#define SHMSZ 27
int main()
{
  char ch;
  int sh;
  key_t key;
  char *shm,*s;
  key=1001;
  if((sh = shmget(key, SHMSZ, IPC_CREAT | 0666)) <0)
  {
    perror("shmget");
    exit(1);
  }
  if((shm = shmat(sh, NULL, 0)) == (char *)-1)
  {
    perror("shmat");
    exit(1);
  }
  s = shm;
  for(ch='a';ch<='z';ch++)
  {
    *s = ch;
     printf("\nServer :\t%c\n",*s++);
  }
  *s = '\0';
  while(*shm != '*')
  {
    sleep(1);
  } 
  exit(0);
}
