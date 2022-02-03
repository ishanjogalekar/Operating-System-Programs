#include<stdio.h>
typedef struct nonpresjf
{
  int at,bt,ft,tat,wt;
}
nonpresjf;
nonpresjf p[20],p1[20];
int main()
{
  int i,limit,nextval,m,min,n;
  p[0].wt=p[0].tat=0;
  printf("\nEnter the no of PATIENTS:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("\nEnter the arrival time:");
    scanf("%d",&p[i].at);
  }
  limit=p[1].at;
  for(i=1;i<=n;i++)
  {
    printf("Enter the burst time:");
    scanf("%d",&p[i].bt);
  }
  for(i=1;i<=n;i++)
    limit+=p[i].bt;
  for(i=1;i<=n;i++)
    p1[i]=p[i];
  printf("\n\nGantt chart is as follows:");
  printf("%d",p[1].at);
  nextval=p[1].at;
  m=1;
  do
  {
    min = 9999;
    for(i=1;p[i].at<=nextval && i<=n ;i++)
      if(p[i].bt<min && p[i].bt>0)
      {
        m=i;
        min=p[i].bt;
      }
    nextval+=p[m].bt;
    p[m].bt=0;
    printf("->P%d->%d",m,nextval);
    if(p[m].bt==0)
    {
      p[m].ft=nextval;
      p[m].tat=p[m].ft-p[m].at; 
      p[m].wt=p[m].tat-p1[m].bt;
      p[0].tat+=p[m].tat;
      p[0].wt+=p[m].wt;
    }
  }
  while(nextval<limit);
  p[0].tat=p[0].tat/n; 
  p[0].wt=p[0].wt/n;
  printf("\n\n**********TABLE**********\n");
  printf("\nProcess\tAT\tBT\tFT\tTAT\tWT\n");
  for(i=1;i<=n;i++)
    printf("\nP%d\t%d\t%d\t%d\t%d\t%d\n",i,p[i].at,p1[i].bt,p[i].ft,p[i].tat,p[i].wt);
  printf("\n\n**************************\n");
  return 0;
}
