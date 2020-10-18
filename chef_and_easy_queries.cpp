#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n,k,index=0,left=0,flag=false;
	    int arr[100000]={};
	    cin>>n>>k;
	    for(int j=1;j<=n;j++){
            cin>>arr[j];
        }
	    for(int j=1;j<=n;j++){
            if(arr[j]+left<k && !flag){
                flag=true;
                index=j;
	        }
            left=(arr[j]+left)-k;
	    }
            if(!flag){
            index=n+left/k+1;
        }
	    cout<<index<<endl;
    }
	return 0;
}
