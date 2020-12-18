#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		int sum=a+b+c;
		int val=sum/9;
		if(sum%9!=0 || a<val || b<val || c<val)
			cout<<"NO"<<endl;
		else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}