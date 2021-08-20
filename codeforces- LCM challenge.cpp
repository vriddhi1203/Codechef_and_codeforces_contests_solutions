#include <iostream>
using namespace std;
long long int gcd(long long int a, long long int b){
		if(b==0)
				return a;
		while(a%b!=0){
				long long int temp=a;
				a=b;
				b=temp%b;
		}
		return b;
}

int main() {
    long long int n,x,y,z;
		cin>>n;
		if(n<=2)
				cout<<n;
		else{
				if(n%2!=0)
						x=n,y=n-1,z=n-2;
				else{
						if(gcd(n,n-3)==1)
								x=n,y=n-1,z=n-3;
						else
								x=n-1,y=n-2,z=n-3;
				}
				cout<<x*y*z;
		}
    return 0;
}