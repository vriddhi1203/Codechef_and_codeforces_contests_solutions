#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,count=0;
		cin>>n;
		int left;
		left=120-n;
        string arr;
		cin>>arr;
		for(int i=0;i<n;i++){
			if(arr[i]=='1')
				count++;
		}
		int days;
		days=left+count;
		if(days>=90)
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
	}
	return 0;
}