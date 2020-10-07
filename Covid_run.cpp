#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k,x,y,flag=0;
	    cin>>n>>k>>x>>y;
	    int move=x;
	    do{
	        move=(move+k)%n;
	        if(move==y){
	            flag=1;
	        }
	    }while(move!=x);
	    if(flag==1)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
