#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int x,y,k,n;
		cin>>x>>y>>k>>n;
		int sub=abs(x-y);
		int t=k*2;
		if(sub%t==0)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}