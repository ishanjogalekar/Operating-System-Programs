#include<iostream>
using namespace std;
struct prodet
{
  int bt;
  int art;
  int ft;
  int tat;
  int wt;
}ar[20] , tmp;
int main()
{
  int n,avwt=0,avtat=0,i,j;
  cout<<"\nEnter no of patients:";
  cin>>n;
  cout<<"\nEnter Patient Time\n";
  for(i=0;i<n;i++)
  {
    cout<<"P["<<i+1<<"]:";
    cin>>ar[i].bt;
  }
  cout<<"\nEnter Patient Arrival Time\n";
  for(i=0;i<n;i++)
  {
    cout<<"P["<<i+1<<"]:";
    cin>>ar[i].art;
  }
  for(int i=0 ; i < n-1; i++)
  {
    for(j = 0; j < n-1-i; j++) {
      if(ar[j].art>ar[j+1].art)
      {
        tmp = ar[j];
        ar[j]=ar[j+1];
        ar[j+1]=tmp;
      } 
    }
  }
  ar[0].ft = ar[0].bt + ar[0].art;
  for(i=1;i<n;i++)
  {
    ar[i].ft = ar[i-1].ft+ar[i].bt;
  }
  cout<<endl<<"*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
  cout<<"\nProcess\t\t Time\tArival Time";
  for(i=0;i<n;i++) 
  {
    cout<<"\nP["<<i+1<<"]"<<"\t\t"<<ar[i].bt<<"\t\t"<<ar[i].art;
  }
  cout<<"\nProcess\t\t Time\tWaiting Time\tTurnaround Time";
  for(i=0;i<n;i++)
  {
    ar[i].tat=ar[i].ft - ar[i].art;
    ar[i].wt = ar[i].tat - ar[i].bt;
    avwt+=ar[i].wt;
    avtat+=ar[i].tat;
    cout<<"\nP["<<i+1<<"]"<<"\t\t"<<ar[i].bt<<"\t\t"<<ar[i].wt<<"\t\t"<<ar[i].tat;
  }
  avwt/=i;
  avtat/=i;
  cout<<"\n\nAverage Waiting Time:"<<avwt;
  cout<<"\nAverage Turnaround Time:"<<avtat;
  return 0;
}
