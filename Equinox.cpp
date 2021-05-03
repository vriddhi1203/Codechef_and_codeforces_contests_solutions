#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n,a,b,sum1=0,sum2=0;
        cin>>n>>a>>b;
        for(ll i=0;i<n;i++){
            string s;
            cin>>s;
            char c=s[0];
            if(c=='E' || c=='Q' || c=='U' || c=='I' || c=='N' || c=='O' || c=='X')
            sum1+=a;
            else
            sum2+=b;
        }
        if(sum1>sum2)
        cout<<"SARTHAK"<<endl;
        else if(sum2>sum1)
        cout<<"ANURADHA"<<endl;
        else
        cout<<"DRAW"<<endl;  
    }
}
