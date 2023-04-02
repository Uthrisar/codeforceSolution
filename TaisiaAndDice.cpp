#include<bits/stdc++.h>
using namespace std;
int main()  {
  int t;cin>>t;
  while(t--) {
    int n,s,r;
    cin>>n>>s>>r;

    int p=r/(n-1);
    int q=r%(n-1);

    int arr[n];
    for(int i=0;i<n-1;i++) {
      arr[i]=p;

    }
    for(int i=n-2;i>=0 && q>0;i--)
    {
      arr[i]=1+arr[i];
      q--;
    }
    arr[n-1]=s-r;

    for(int i=0;i<n;i++) {
      cout<<arr[i]<<"\t";
    }
    cout<<"\n";
  }
 
}