#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *factorial(void *ptr)
{
    int n, i;
    unsigned long long fact = 1;
    printf("\nEnter No: ");
    scanf("%d", &n);

    if (n < 0)
        printf("\nNegative no factorial not possible!");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("\nFactorial of %d = %llu\n", n, fact);
    }
    return 0;	
}
int main()
{
  pthread_t thread_id;
  pthread_create(&thread_id, NULL, factorial, NULL);
	pthread_join(thread_id, NULL);
  exit(0);
}
