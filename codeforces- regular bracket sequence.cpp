#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int count=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='?')
				count++;
		}
		if(count%2!=0){
			cout<<"NO"<<endl;
			continue;
		}
		else if(s[0]==')' || s[s.length()-1]=='('){
			cout<<"NO"<<endl;
			continue;
		}
		else
			cout<<"YES"<<endl;
	}
	return 0;
}