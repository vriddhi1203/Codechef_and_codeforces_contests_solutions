//.......Chef and strings......//
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t>=0)
	{
	    long long int N;
	    cin>>N;
	    long long int a[100000];
	   long long int sum=0;

	    for(int i=0;i<N;i++)
	    {
	        cin>>a[i];
	    }

	    for(int i=0;i<N-1;i++)
	    {
	        sum+=abs(a[i]-a[i+1])-1;


	    }

	    cout<<sum<<endl;
	    t--;
	}


	return 0;
}
