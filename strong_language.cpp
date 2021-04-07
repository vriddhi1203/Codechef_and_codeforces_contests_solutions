#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,k;
		string s;
		cin>>n>>k;
		cin>>s;
        ll flag=0,count=0;
        for(ll i=0;i<n;i++){
        	if(s[i]=='*')
        		count++;
        	if(count==k){
        		flag=1;
        		break;
        	}
        	if(s[i]!='*' && k>1)
        		count=0;
        }
		if(flag==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}