#include<bits/stdc++.h>
#define int long long int
using namespace std;
int find_power(int c, unsigned int u, int o)
{
    int ans = 1; 
 
    c = c % o; 
  
    if (c == 0) return 0;
    u--;
    while (u > 0)
    {
        if (u & 1)
            ans = (ans*c) % o;
 
        u = u>>1;
        c = (c*c) % o;
    }
    return ans;
}
int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=2){
            cout<<n<<endl;
            continue;
        }
        int x=find_power(2,n,1000000007);
        cout<<(int)x<<endl;
    }
    return 0;
}