#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[100000];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    int count=0,gas=arr[0];
	    for(int i=1;i<n;i++){
	    	if(gas!=0){
	    		count++;
	    		gas=gas+arr[i]-1;
	    	}
	    }
	    cout<<gas+count<<endl;
	}
	return 0;
}
