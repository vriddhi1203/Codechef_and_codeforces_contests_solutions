#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,x;
		cin>>n>>x;
		int arr[100000];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		long long int count=0,total=0;
		for(int i=0;i<n;i++){
			count+=arr[i];
            total+=(arr[i]/x);
            if(arr[i]%x)
            	total++;
		}
		long long int min_beauty,max_beauty=total;
		min_beauty=(count/x);
		if(count%x)
			min_beauty++;
		cout<<min_beauty<<" "<<max_beauty<<endl;
	}
	return 0;
}