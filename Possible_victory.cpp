#include <bits/stdc++.h>
using namespace std;
int main(){
	int R,O,C;
	cin>>R>>O>>C;
	int oversleft=20-O;
	int runs=(oversleft*6)*6;
	if((C+runs)>R)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}