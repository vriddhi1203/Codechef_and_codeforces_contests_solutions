#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,d;
		vector<int> A;
		cin>>n>>k>>d;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			A.push_back(num);
		}
		int sum=0,contests;
		for(int i=0;i<n;i++){
			sum+=A[i];
		}
		contests=sum/k;
		if(sum<k)
			cout<<"0"<<endl;
		else if(contests>d)
			cout<<d<<endl;
		else
			cout<<contests<<endl;
	}
	return 0;
}