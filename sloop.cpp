#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll m,s;
        cin>>m>>s;
        if(m<s){
            cout<<"0"<<endl;
            continue;
        }
        else {
            cout<<(m/s)<<endl;
        }
    }
    return 0;
}
