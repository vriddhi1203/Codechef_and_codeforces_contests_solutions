//..................Chef and card game.........//
#include <iostream>
using namespace std;

int sum(int x)
{
	int r=x,sum=0;
	while(r>0)
	{
			sum+=r%10;
			r=r/10;
	}
return sum;
}

int main() {
	int t;
	cin>>t;

	while(t--)
	{
	    int n;
	    cin>>n;
	        long long int a,b;
	        int c_wins=0, m_wins=0;
	    for(int i=0;i<n;i++)
	    {

	    cin>>a>>b;

	    int sum_a=0, sum_b=0;
	   sum_a = sum(a);
		 sum_b = sum(b);

	  if(sum_a>sum_b)
	      {
	      c_wins++;
	      }
	   if(sum_a<sum_b)
	     {
	     m_wins++;
	     }
	   if(sum_a==sum_b)
	   {
	       c_wins++;
	       m_wins++;

	   }

	    }

	    if(c_wins>m_wins)
	        cout<<0<<" "<<c_wins;
	   if(c_wins<m_wins)
	        cout<<1<<" "<<m_wins;
	    if(c_wins==m_wins)
	     cout<<2<<" "<<c_wins;

	   cout<<endl;

	}
	return 0;
}
