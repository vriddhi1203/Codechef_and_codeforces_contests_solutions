#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll arr[n];
		for(ll i=0;i<n;i++)
			cin>>arr[i];
		map<ll, ll> mp;
		ll count=0;
		for(ll i=0;i<n;i++){
			mp[arr[i]-i]++;
		}
		for(auto i : mp){
			count+=(i.second)*(i.second-1)/2;
		}
		cout<<count<<endl;
	}
	return 0;
}