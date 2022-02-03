#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
void *print_message_function( void *ptr );
int main()
{
    
    pthread_t th1, th2;
    char *m1 = "Thread 1";
    char *m2 = "Thread 2";
    int it1, it2;

    it1 = pthread_create( &th1, NULL, print_message_function, (void*) m1);
    it2 = pthread_create( &th2, NULL, print_message_function, (void*) m2);

    pthread_join( th1, NULL);
    pthread_join( th2, NULL);
    printf("Thread 1 COMPLETED: %d\n",it1);
    printf("Thread 2 COMPLETED: %d\n",it2);
    exit(0);
}
void *print_message_function( void *ptr )
{
    char *m;
    m = (char *) ptr;
    printf("%s \n", m);
}
