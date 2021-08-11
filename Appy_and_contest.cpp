#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll gcdd(ll maxn, ll minn){
	if(minn==0)
		return maxn;
	else
		return gcdd(minn,maxn%minn);
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,a,b,k;
		cin>>n>>a>>b>>k;
		ll maxn=max(a,b);
		ll minn=min(a,b);
		ll gcd=gcdd(maxn,minn);
		ll lcm=(a*b)/gcd;
		ll total=n/a + n/b - 2*(n/lcm);
		if(total>=k)
			cout<<"Win"<<endl;
		else
			cout<<"Lose"<<endl;
	}
	return 0;
}