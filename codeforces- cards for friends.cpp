#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int w,h,n;
		int count=1;
		cin>>w>>h>>n;
		if(w%2!=0 && h%2!=0 && n==1){
            cout<<"YES"<<endl;
            continue;
        }
		if(w%2==0){
			while(w%2==0){
				w=w/2;
				count=count*2;
			}
		}
		if(h%2==0){
			while(h%2==0){
				h=h/2;
				count=count*2;
			}
		}
		if(count>=n)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}