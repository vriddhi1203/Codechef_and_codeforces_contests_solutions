#include <bits/stdc++.h>  
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k=1;
		int arr[100000][100000];
		cin>>n; 
        if(n==1)
        	cout<<"1"<<endl;
        else if(n==2)
        	cout<<"-1"<<endl;
        else{
        	for(int i=0;i<n;i++){
        	    for(int j=i%2;j<n;j+=2){
                arr[i][j]=k;
                k++;
        	}
        }
            for(int i=0;i<n;i++){
        	    if(i%2==0){
        		   for(int j=1;j<n;j+=2){
        			arr[i][j]=k;
        			k++;
        		}
        	}
        	    else{
        		    for(int j=0;j<n;j+=2){
        			arr[i][j]=k;
        			k++;
        		}
        	}
        }
            for(int i=0;i<n;i++){
        	    for(int j=0;j<n;j++){
        		cout<<arr[i][j];
        	}
        	cout<<endl;
        }
        }
	}
	return 0;
}