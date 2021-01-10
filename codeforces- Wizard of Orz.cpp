#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s="989";
		if(n<=3){
			string ans=s.substr(0,n);  //0 is included but not n
			cout<<ans<<endl;
		}
		else{
			cout<<s;
			for(int i=3;i<n;i++){
				cout<<(i-3)%10;
			}
			cout<<endl;
		}
	}
	return 0;
}