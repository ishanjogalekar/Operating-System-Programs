#include <sys/types.h>
#include <sys/ipc.h>
#include <stdio.h>
#include <sys/shm.h>
#include <stdlib.h>
#include <ctype.h>
#define SHMSZ 27
int main()
{
  int sh;
  key_t key;
  char *shm,*s;
  key = 1001;
  if((sh = shmget(key, SHMSZ, 0666)) < 0)
  {
    perror("shmget");
    exit(1);
  }
  if((shm = shmat(sh, NULL, 0)) == (char *) -1)
  {
    perror("shmat");
    exit(1);
  }
  for(s = shm; *s != '\0'; s++)
  {
    printf("\nClient reading:\t%c\n",*s);
    printf("Client writting:\t");
    putchar(toupper(*s));
    printf("\n");
  }
  putchar('\n');
  *shm = '*';
  exit(0);
}
