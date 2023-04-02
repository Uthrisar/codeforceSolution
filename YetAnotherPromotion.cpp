#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin>>t;
  while(t--){
    long long a,b,n,m; cin>>a>>b>>n>>m;
    long long tot_cost=0;
    if(n>=m+1){
      if(m*a>=(m+1)*b) tot_cost=(n/(m+1))*(m+1)*b;
      else tot_cost=n/(m+1)*m*a;
      }
    n=n%(m+1);
    if(a>b) cout<<tot_cost+n*b<<"\n";
    else cout<<tot_cost+n*a<<"\n";
    
  }
}
