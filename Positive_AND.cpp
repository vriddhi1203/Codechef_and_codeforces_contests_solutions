#include <bits/stdc++.h>
using namespace std;

void bitwise(int n){
    int arr[n];
	arr[1]=2;
	arr[2]=3;
	arr[3]=1;
    for(int i=4;i<=n;i++){
        if(i%4==0){
            arr[i]=i+1;
        }
        else if(i%4==1){
            arr[i]=i-1;
        }
        else{
            arr[i]=i;
        }
    }
    for(int i=1;i<=n;i++)
	        cout<<arr[i]<<" ";
	        cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    if(n==1 || n==2 || n%4==0){
	        cout<<"-1"<<endl;
	    }
	    else if(n==3){
	        cout<<"1 3 2"<<endl;
	    }
	    else{
	        bitwise(n);
	    }
	}
	return 0;
}
