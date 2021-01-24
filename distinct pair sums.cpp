#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int l,r,count=0;
		cin>>l>>r;
		if(l==r)
			count=1;
		else{
			int left=l+l;
			int right=r+r;
			count=right - left + 1;
		}
		cout<<count<<endl;
	}
	return 0;
}