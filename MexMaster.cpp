#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++) {
      cin>>a[i];
      b[i]=a[i];
    }
    sort(b,b+n);
    int count=0;
    int x;
    for(int i=0;i<n;i++){
      if(b[i]==0) count++;
      else {
        x=b[i];
        break;
      }
    }
    if(count==n) x=0;
    int y;
    for(int i=n-2;i>=0;i--){
      if(b[i]!=b[n-1]) {
         y=b[i];
        break;
      }
      else y=b[n-1];
    }

    if(b[0]>0) cout<<"0"<<endl;
    else{
      if(count>n-count+1){
          if(b[n-1]>1) cout<<"1"<<endl;
          else {
            if(b[n-1]==0) cout<<"1"<<endl;
            else cout<<"2"<<endl;
          }
      }
      else{
        cout<<"0"<<endl;
      }
    }
  }
}