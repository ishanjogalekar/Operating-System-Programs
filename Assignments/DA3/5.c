#include<stdio.h>
#include<semaphore.h>
#include<pthread.h>
#include<stdlib.h>
#define buffersize 100
pthread_mutex_t mutex;
pthread_t tidP[100],tidC[100];
sem_t full,empty;
int counter;
int buffer[buffersize];
void initialize()
{
pthread_mutex_init(&mutex,NULL);
sem_init(&full,1,0);
sem_init(&empty,1,buffersize);
counter=0;
}
void write(int item)
{
buffer[counter++]=item;
}
int read()
{
return(buffer[--counter]);
}
void * producer (void * param)
{
int waittime,item,i;
item=rand()%5;
waittime=rand()%5;
sem_wait(&empty);
pthread_mutex_lock(&mutex);
printf("\nProducer produced item: %d\n",item);
write(item);
pthread_mutex_unlock(&mutex);
sem_post(&full);
}
void * consumer (void * param)
{
int waittime,item;
waittime=rand()%5;
sem_wait(&full);
pthread_mutex_lock(&mutex);
item=read();
printf("\nConsumer consumed item: %d\n",item);
pthread_mutex_unlock(&mutex);
sem_post(&empty);
}
int main()
{
    printf("\n19BCE2250 - Ishan Jogalekar");
    int n1,n2,i;
    initialize();
    printf("\nNo of producers: ");
    scanf("%d",&n1);
    printf("\nNo of consumers: ");
    scanf("%d",&n2);
    for(i=0;i<n1;i++)
      pthread_create(&tidP[i],NULL,producer,NULL);
    for(i=0;i<n2;i++)
      pthread_create(&tidC[i],NULL,consumer,NULL);
    for(i=0;i<n1;i++)
      pthread_join(tidP[i],NULL);
    for(i=0;i<n2;i++)
      pthread_join(tidC[i],NULL);
exit(0);
}