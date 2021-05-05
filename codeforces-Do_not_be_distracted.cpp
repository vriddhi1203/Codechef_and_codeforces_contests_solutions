#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		string str;
		cin>>str;
		bool ans=true;
		for(int i=0;i<str.length();i++){
			if(str[i]!=str[i+1]){
				int num=str[i];
				for(int j=i+2;j<str.length();j++){
					if(num==str[j]){
						ans=false;
						break;
					}
				}
				if(ans==false)
					break;
			}
		}
		if(ans==false)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}