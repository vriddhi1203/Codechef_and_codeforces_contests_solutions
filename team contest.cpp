#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	vector<int> arr;
	cin>>n;
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		arr.push_back(num);
	}
	sort(arr.begin(),arr.end());
	int median=arr[n/2];
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=abs(arr[i]-median);
	}
	cout<<sum<<endl;
	return 0;
}
