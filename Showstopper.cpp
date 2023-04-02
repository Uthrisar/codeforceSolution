#include<bits/stdc++.h>
using namespace std;
int main(){
  int tc;cin>>tc;
  while(tc--){
    int n;cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    int count=0;
    for(int i=0;i<n-1;i++){
      if((a[i]<=a[n-1] && b[i]<=b[n-1])||(a[i]<=b[n-1] && b[i]<=a[n-1])) count++;
      else 
        {
          cout<<"No"<<endl;
          break;
        }
    }
    if(count==n-1) cout<<"Yes"<<endl;
  }
}