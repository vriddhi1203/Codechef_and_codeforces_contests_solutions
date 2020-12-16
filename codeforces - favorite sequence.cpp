#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int b[100000];
		for(int i=0;i<n;i++)
			cin>>b[i];
		int k=0;
		for(int i=0;i<n;i++){
			if(i%2==0){
				cout<<b[k]<<" ";
				continue;
			}
			else{
				cout<<b[n-1-k]<<" ";
				k++;
			}
		}
		cout<<endl;
	}
	return 0;
}