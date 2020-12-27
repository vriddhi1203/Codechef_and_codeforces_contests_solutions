#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,zeroes=0,ones=0;
		cin>>n;
		string s,p;
		cin>>s;
		cin>>p;
		for(int i=0;i<n;i++){
			if(s[i]!=p[i]){
				if(s[i]=='0')
					zeroes++;
				else
					ones++;
			}
		}
		if(zeroes!=ones){
			cout<<"No"<<endl;
			continue;
		}
		int c1=0;
		int ans=1;
		for(int i=0;i<n;i++){
			if(s[i]!=p[i]){
				if(s[i]=='0'){
					if(c1>0)
						c1--;
					else{
						ans=0;
						break;
					}
				}
				else
					c1++;
			}
		}
		if(ans)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}