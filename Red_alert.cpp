#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		bool red_alert=false;
		long long int n,d,h,water_level=0;
		cin>>n>>d>>h;
		long long int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		for(int i=0;i<n;i++){
			if(arr[i]>0)
				water_level+=arr[i];
			else if(arr[i]==0){
				if(water_level<d)
					water_level=0;
				else
					water_level-=d;
			}
			if(water_level>h){
				red_alert=true;
				break;
			}
		}
		if(red_alert)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}