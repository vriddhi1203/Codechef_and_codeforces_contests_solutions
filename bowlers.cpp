#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t>0){
        int n,k,l;
        cin>>n>>k>>l;
        if(k*l<n)
        cout<<-1<<endl;
        if(k==1 && n>1)
        cout<<-1<<endl;
        else if(k*l>=n && k!=1){
            int temp=0;
            for(int i=0;i<n;i++){
                if(k-temp==0)
                temp=0;
                cout<<++temp<<" ";
            }
            cout<<endl;
        }
        t--;
    }
	return 0;
}