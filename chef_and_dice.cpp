#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll ans[10000];
		ans[0]=76;
		ans[1]=88;
		ans[2]=99;
		ans[3]=104;
		if(n==1)
			cout<<"20"<<endl;
		else if(n==2)
			cout<<"36"<<endl;
		else if(n==3)
			cout<<"51"<<endl;
		else if(n==4)
			cout<<"60"<<endl;
		else{
			ll answer=((((n-1)/4)-1)*44 + ans[(n-1)%4]);
			cout<<answer<<endl;
		}
	}
	return 0;
}