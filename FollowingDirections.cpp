#include<bits/stdc++.h>
using namespace std;

void solve(string &str, int N)
{ 
  int x=0,y=0;

    for (int i = 0; i < N; i++) {
  
        if(str[i]=='U') ++y;
        if(str[i]=='R') ++x;
        if(str[i]=='L') --x;
        if(str[i]=='D') --y;

        if(x==1 && y==1) break;
        
    }

    if(x==1 && y==1) {
      cout<<"YES"<<endl;
    } 
    else {
      cout<<"NO"<<endl;
    }
      
}
int main() {
  int t;
  cin>>t;
  while(t--) {
    int n;cin>>n;
    string st;cin>>st;
    solve(st,n);
  }
}