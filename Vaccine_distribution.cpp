#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,d,count=0,risk=0,ans1=0,ans2=0;
		cin>>n>>d;
		int arr[100000];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		for(int i=0;i<n;i++){
			if(arr[i]>=80 || arr[i]<=9)
				risk++;
		}
		if(risk%d==0)
		ans1=risk/d;
		else
		ans1=(risk/d)+1;
		if((n-risk)%d==0)
		ans2=(n-risk)/d;
		else
		ans2=((n-risk)/d)+1;
		count=ans1+ans2;
		if(d==1)
		cout<<n<<endl;
		else
		cout<<count<<endl;	
	}
	return 0;
}