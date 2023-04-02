#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;
  while(t--){
    string s;cin>>s;
    map<char,int> mp;
    for(int i=0;i<4;i++){
      mp.insert({s[i],i});
    }
    int count=0;
    if(mp.size()==4 || mp.size()==3) cout<<"4"<<endl;
    else if(mp.size()==1) cout<<"-1"<<endl;
    else {
      for(int i=1;i<4;i++){
        if(s[0]==s[i]) count++;
      }
      if(count==0 || count==2)cout<<"6"<<endl;
      else cout<<"4"<<endl;
    }
  
  }
}