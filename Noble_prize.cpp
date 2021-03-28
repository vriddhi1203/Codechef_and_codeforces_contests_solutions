#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		vector<bool> taken(m, false);
		while(n--){
			ll topic;
             cin>>topic;
			topic--;
			taken[topic]=true;
		}
		bool poss=false;
		for(ll i=0;i<m;i++){
			if(!taken[i]){
				poss=true;
			}
		}
		if(poss)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}