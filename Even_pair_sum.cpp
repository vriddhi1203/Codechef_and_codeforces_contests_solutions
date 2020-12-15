#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int a,b,count=0;
		cin>>a>>b;
		long long int e1,e2,o1,o2;
		e1=a/2;  //number of even numbers
		o1=a-e1; //number of odd numbers
		e2=b/2;
		o2=b-e2;
		count=e1*e2+o1*o2;
		cout<<count<<endl;
	}
	return 0;
}