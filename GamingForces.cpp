#include<bits/stdc++.h>
using namespace std;

int main()  {
      int t; cin>>t;
      while(t--)  {
         int n;cin>>n;
         int ar[n];

         for(int i=0;i<n;i++) {cin>>ar[i];}
               
               int gt2=0,et1=0,out=0;

               for(int i=0;i<n;i++) {

                  if(ar[i]>=2) {gt2++; out++; }


                  else if(ar[i]==1) {et1++;}
                  
               }

            if(et1%2==0)   {
               out=out+et1/2;
            }
            else{
               out=out+(et1/2)+1;
            }

      cout<<out<<"\n";

      }
}