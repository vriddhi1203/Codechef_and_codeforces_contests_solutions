//..........Ada King...........//
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t>0)
	{
	    int n;
	    cin>>n;
	    int count=1;

	    for(int i=0;i<8;i++)
	    {
	        for(int j=0;j<8;j++)
	        {
	            if(count<n)
	             cout<<".";

	            else if(count==n)
	             cout<<"O";

	            else
	                cout<<"X";

	        count+=1;
	        }

	        cout<<endl;
	    }
	    t--;
	}
	return 0;
}
