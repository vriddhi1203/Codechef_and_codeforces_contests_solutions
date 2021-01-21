#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int hour_hand;
		cin>>hour_hand;
		if(hour_hand<=6)
			cout<<hour_hand+6<<endl;
		else if(hour_hand==7)
			cout<<"1"<<endl;
		else if(hour_hand==8)
			cout<<"2"<<endl;
		else if(hour_hand==9)
			cout<<"3"<<endl;
		else if(hour_hand==10)
			cout<<"4"<<endl;
		else if(hour_hand==11)
			cout<<"5"<<endl;
		else if(hour_hand==12)
			cout<<"6"<<endl;
	}
	return 0;
}