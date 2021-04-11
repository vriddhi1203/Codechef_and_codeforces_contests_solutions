#include <bits/stdc++.h>
#define ll char
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,row1=-1,col1=-1,row2=-1,col2=-1;
		cin>>n;
		ll rec[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>rec[i][j];
				if(rec[i][j]=='*'){
					if(row1==-1 && col1==-1){
						row1=i;
						col1=j;
					}
					else{
						row2=i;
						col2=j;
					}
				}
			}
		}
		if(row1==row2){
			if(row1==0){
				rec[0+1][col1]='*';
				rec[0+1][col2]='*';
			}
			else{
				rec[0][col1]='*';
				rec[0][col2]='*';
			}
		}
		else if(col1==col2){
			if(col1==0){
				rec[row1][0+1]='*';
				rec[row2][0+1]='*';
			}
			else{
				rec[row1][0]='*';
				rec[row2][0]='*';
			}
		}
		else{
			rec[row1][col2]='*';
			rec[row2][col1]='*';
		    rec[row1][col1]='*';
			rec[row2][col2]='*';
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++)
				cout<<rec[i][j];
                cout<<endl;
		}
	}
	return 0;
}