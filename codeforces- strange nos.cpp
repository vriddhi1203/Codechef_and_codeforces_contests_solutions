#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		long long unsigned int n;
		cin>>n;
		long long int count=0;
		while(n!=0) {
			n/=10;
			++count;
		}
		cout<<count<<endl;
	}
	return 0;
}