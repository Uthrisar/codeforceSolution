#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;
  while(t--){
    int a,b,c,d;cin>>a>>b>>c>>d;
    if((b>d) || (c+b>a+d)){
      cout<<"-1"<<endl;
  }
  else{
    cout<<abs(a+d-b-c)+abs(b-d)<<endl;
  }
   
}
}