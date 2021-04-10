#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,arr[100000];
		cin>>n;
		for(ll j=1;j<=n;j++)
			cin>>arr[j];
            ll flag;
		for(ll i=1;i<=n;i++){
			if((arr[i]!=arr[i+1]) && (i!=n-1)){
                if(arr[i]!=arr[i+2])
                    flag=i;
                else
                    flag=i+1;
                break;
            }
            if((arr[i]!=arr[i+1]) && (i==n-1)){
                if(arr[i]==arr[i-1])
                    flag=n;
                else
                    flag=i;
                break;
            }
		}
		cout<<flag<<endl;
	}
	return 0;
}