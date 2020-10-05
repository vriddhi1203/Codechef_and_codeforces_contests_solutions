//................Missing a point........//
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t>0)
	{
	    long long int n;
	    cin>>n;
	int xor_x=0, xor_y=0;

	for(int i=0;i<4*n-1;i++)
	{
	   long long int x,y;
	   cin>>x>>y;

	   xor_x^=x;
	   xor_y^=y;

	}

	cout<<xor_x<<" "<<xor_y<<endl;

	    t--;
	}
	return 0;
}
