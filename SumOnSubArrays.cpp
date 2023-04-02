#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;
  while (t--)
  {
    int n;int k;cin>>n>>k;
    int count=0;
    for(int i=1;(i*(i+1)/2)<k;i++) count++;
    
   int x=-2*(count-(k-count*(count+1)/2))-1;

   for(int i=0;i<count;i++) cout<<"2  ";
   cout<<x<<"  ";
   for(int i=count+1;i<n;i++) cout<<"-1000  ";
   cout<<endl;
  }
  
}