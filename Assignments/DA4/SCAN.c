#include<stdio.h>
int main()
{
    printf("\n19BCE2250 - Ishan Jogalekar");
    int i,j,sum=0,n;
    int d[20];
    int disk,temp,max,dloc; 
    printf("\nEnter number of location:");
    scanf("%d",&n);
    printf("\nEnter position of head:");
    scanf("%d",&disk);
    printf("\nenter elements of disk queue:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&d[i]);
    }
    d[n]=disk; 
    n=n+1;
    for(i=0;i<n;i++) 
    {
        for(j=i;j<n;j++)
        {
            if(d[i]>d[j])
            {
                temp=d[i];
                d[i]=d[j];
                d[j]=temp;
            }
        }
    }
    max=d[n];
    for(i=0;i<n;i++) 
    {
        if(disk==d[i]) { dloc=i; break; }
    }
    for(i=dloc;i>=0;i--)
    {
        printf("%d -->",d[i]);
    }
    printf("0 -->");
    for(i=dloc+1;i<n;i++)
    {
        printf("%d-->",d[i]);
    }
    sum=disk+max;
    printf("\nmovement of total cylinders %d",sum);
    return 0;
}