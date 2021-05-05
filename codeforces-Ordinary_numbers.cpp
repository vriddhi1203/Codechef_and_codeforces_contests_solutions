#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
	   ll n,count=0;
	   cin>>n;
	   for(ll i=1;i<=9;i++){
	   	   ll num=0;
	   	   for(ll j=1;j<=9;j++){
	   	   	   num=num*10+i;
	   	   	   if(num<=n)
	   	   	   	count++;
	   	   }
	   }
	   cout<<count<<endl;
	}
    return 0;
}