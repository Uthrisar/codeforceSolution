#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;
  while(t--){
    long long n;cin>>n; 
    if(n%2==1 || n<4) cout<<"-1"<<endl;
    else{
      long long x=n/2;
      if(x%3==0) cout<<x/3<<"  ";
      else cout<<x/3+1<<"  ";

      cout<<x/2<<endl;
    }
  }
}