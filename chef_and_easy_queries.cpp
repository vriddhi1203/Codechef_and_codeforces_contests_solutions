#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n,k,index=0,left=0,flag=0;
	    int arr[100000]={};
	    cin>>n>>k;
	    for(int j=1;j<=n;j++){
            cin>>arr[j];
        }
	    for(int j=1;j<=100000;j++){
            if(arr[j]+left<k){
                flag=1;
                index=j;
	        }
            left=(arr[j]+left)-k;
            if(flag==1)
            break;
	    }
	    cout<<index<<endl;
    }
	return 0;
}