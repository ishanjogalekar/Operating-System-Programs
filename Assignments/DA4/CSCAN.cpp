#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"\n19BCE2250 - Ishan Jogalekar";
    int i,j,k,n,m,sum=0,x,y,h;
    cout<<"\n Enter the size of disk:";
    cin>>m;
    cout<<"\nEnter number of requests :";
    cin>>n;
    cout<<"\nEnter the requests :";
    vector <int> a(n),b;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]>m){
            cout<<"Error, Unknown position "<<a[i]<<"\n";
            return 0;
        }
    }
    cout<<"\nEnter the head position : ";
    cin>>h;
    int temp=h;
    a.push_back(h);
    a.push_back(m);
    a.push_back(0);
    sort(a.begin(),a.end());
    for(i=0;i<a.size();i++){
        if(h==a[i])
            break;
    }
    k=i;
    if(k<n/2){
        for(i=k;i<a.size();i++){
            b.push_back(a[i]);
        }
        for(i=0;i<=k-1;i++){
            b.push_back(a[i]);
        }
    }
    else{    
        for(i=k;i>=0;i--){
            b.push_back(a[i]);
        }
        for(i=a.size()-1;i>=k+1;i--){
            b.push_back(a[i]);
        }
    }
    temp=b[0];
    cout<<temp;
    for(i=1;i<b.size();i++){
        cout<<" -> "<<b[i];
        sum+=abs(b[i]-temp);
        temp=b[i];
    }
    cout<<'\n';
    cout<<"Total head movements = "<< sum;
   
    return 0;
}