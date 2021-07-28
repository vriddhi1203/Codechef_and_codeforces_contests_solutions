#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
        cin>>a>>b>>c;
		int ones=0,zeroes=0;
		int arr[3];
		arr[0]=a;
		arr[1]=b;
		arr[2]=c;
		for(int i=0;i<3;i++){
			if(arr[i]==0)
				zeroes++;
			else
				ones++;
		}
		if(zeroes>0 && ones>1)
			cout<<"1"<<endl;
		else
			cout<<"0"<<endl;
	}
	return 0;
}