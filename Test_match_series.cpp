#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int cnt0=0,cnt1=0,cnt2=0;
		int arr[6];
		for(int i=0;i<5;i++)
			cin>>arr[i];
		for(int i=0;i<5;i++){
			if(arr[i]==0) cnt0++;
			if(arr[i]==1) cnt1++;
			if(arr[i]==2) cnt2++;
		}
		if(cnt1==cnt2)
			cout<<"DRAW"<<endl;
		else if(cnt1>cnt2)
			cout<<"INDIA"<<endl;
		else
			cout<<"ENGLAND"<<endl;
	}
	return 0;
}