#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	vector<int> arr(n);
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	sort(arr.begin(),arr.end());
	int median=arr[n/2];
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=abs(arr[i]-median);
	}
	cout<<sum<<endl;
	return 0;
}