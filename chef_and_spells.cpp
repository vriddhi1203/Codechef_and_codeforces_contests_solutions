#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int a,b,c;
		cin>>a>>b>>c;
		long long int p1,p2,p3,max_power;
		p1=a+b;
		p2=b+c;
		p3=a+c;
		max_power=max(p1,p2);
		max_power=max(p3,max_power);
		cout<<max_power<<endl;
	}
	return 0;
}