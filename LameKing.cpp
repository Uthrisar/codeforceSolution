#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int a,b;cin>>a>>b;
		if(abs(a)>abs(b)){
			if(abs(a)-abs(b)==1){
				cout<<abs(a)+abs(b)<<endl;
			}
			else
			cout<<((2*(abs(a)-abs(b))-1)+(2*abs(b)))<<endl;
		}
		if(abs(a)<abs(b)){
			if(abs(b)-abs(a)==1){
				cout<<abs(a)+abs(b)<<endl;
			}
			else
			cout<<((2*(abs(b)-abs(a))-1)+(2*abs(a)))<<endl;
		}
		if(abs(a)==abs(b)){
			cout<<2*abs(a)<<endl;
		}

	}
}
