#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,upvote1=0,downvote1=0,upvote2=0,downvote2=0;
		cin>>n;
		ll arr[100000];
		for(ll i=0;i<n;i++)
			cin>>arr[i];
		for(ll i=0;i<n;i++){
			if(arr[i]==1){
				if(upvote1>=downvote1)
					upvote1++;
				else
					upvote2++;
			}
			else if(arr[i]==2){
					downvote1++;
			}
			else{
				if(upvote1>=downvote1)
					upvote1++;
				else if(upvote2>=downvote2)
					upvote2++;
				else if((downvote1>upvote1) && (upvote2==downvote2))
					upvote2++;
				else if((downvote1>upvote1) && (downvote2>upvote2))
					downvote1++;
			}
		}
		cout<<upvote1+upvote2<<endl;
	}
	return 0;
}