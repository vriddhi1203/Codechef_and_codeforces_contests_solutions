#include <bits/stdc++.h>
#define ll long long int  
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll x,y,z,k,one,two;
		cin>>x>>y>>z>>k;
		one=z/x;
		two=k/y;
		cout<<one+two<<endl;
	}
	return 0;
}