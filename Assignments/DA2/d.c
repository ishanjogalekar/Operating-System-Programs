#include<stdio.h>
#include<pthread.h>
int arr[50],n,i;
void *th1()
{
  int sum=0;
  float avg;
  printf("\nEnter no of digits:\n");
  scanf("%d",&n);
  printf("\nEnter numbers:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
    sum=sum+arr[i];
  }
  avg=sum/n;
  printf("\nThe average = %f",avg);
}
void *th2()
{
  int temp=arr[0];
  for(int i=1;i<n;i++)
  {
    if(temp>arr[i])
    {
      temp=arr[i];
    }
  }
  printf("\nThe Minimum value = %d",temp);
}
void *th3()
{
  int temp=arr[0];
  for(int i=1;i<n;i++)
  {
    if(temp<arr[i])
    {
      temp=arr[i];
    }
  }
  printf("\nThe Maximum value = %d\n",temp);
}
int main()
{
  int n,i;
  pthread_t t1;
  pthread_t t2;
  pthread_t t3;
  n=pthread_create(&t1,NULL,&th1,NULL);
  pthread_join(t1,NULL);
  n=pthread_create(&t2,NULL,&th2,NULL);
  pthread_join(t2,NULL);
  n=pthread_create(&t3,NULL,&th3,NULL);
  pthread_join(t3,NULL);
}
