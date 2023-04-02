#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;cin>>t;
  while(t--)
  {
    int n;cin>>n;

    int s=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    

  for(int i=0;i<n-1;i++)
  {
    if((arr[i]+arr[i+1])%2==0)
    {
      s++;
    }
  }

cout<<s<<"\n";

  }
}


 
