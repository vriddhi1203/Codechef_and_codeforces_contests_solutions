#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
int main() {
    ll t;
    cin>>t;
    while(t--){
       ll l,good_deeds=0,bad_deeds=0;
       string s;
       cin>>l;
       cin>>s;
       bool ans=false;
       for(ll i=0;i<l;i++){
           if(s[i]=='1')
           good_deeds++;
           else
           bad_deeds++;
           if(good_deeds>=bad_deeds)
           ans=true;
       }
       if(ans)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
    }
}
