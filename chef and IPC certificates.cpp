#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,k;
	cin>>n>>m>>k;
    int min[n][k+1];
	for(int i=0;i<n;i++){
	    for(int j=0;j<k+1;j++){
	        cin>>min[i][j];
	    }
	}
	
	int count=0;
	for(int i=0;i<n;i++){
	    int sum=0,flag;
	    for(int j=0;j<k+1;j++){
	        if(j<k){
                sum+=min[i][j];
            }
	    }
         flag=min[i][k];
	    if(sum>=8 && flag<=10)
	    count++;
	}
	cout<<count<<endl;
	return 0;
}
