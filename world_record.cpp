#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		float k1,k2,k3,v;
		cin>>k1>>k2>>k3>>v;
		float finalspeed,time;
		finalspeed=k1*k2*k3*v;
		time=100/finalspeed;
	    float upgrade=time*100;
		ll ans=(round(upgrade));
		if(ans<958)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}