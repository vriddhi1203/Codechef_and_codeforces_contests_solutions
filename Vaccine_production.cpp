#include <bits/stdc++.h>
using namespace std;
int main(){
	int d1,v1,d2,v2,p;
	cin>>d1>>v1>>d2>>v2>>p;
	int count1=0,count2=0,count3=0,count4=0,count5=0,days1,days2,days3,days4,days5;
	if(d1==d2){
		int add1=v1+v2;
		if(p%add1==0)
			days1=p/add1;
		else
			days1=(p/add1)+1;
		count1=days1+(d1-1);
		cout<<count1<<endl;
	}
	else if(d2<d1){
		if(p<((d1-d2)*v2)){
			if(p%v2==0)
				days2=p/v2;
			else
				days2=(p/v2)+1;
			count2=days2+(d2-1);
			cout<<count2<<endl;
		}
		else if(p==((d1-d2)*v2)){
			days3=p/v2;
			cout<<days3<<endl;
		}
		else {
			count3=(d1-d2);
			int add2=v1+v2;
			if((p-((d1-d2)*v2))%add2==0)
				count3+=(p-((d1-d2)*v2))/add2;
			else
				count3+=((p-((d1-d2)*v2))/add2)+1;
			count3+=d2-1;
			cout<<count3<<endl;
		}
	}
	else{
		if(p<((d2-d1)*v1)){
			if(p%v1==0)
				days4=p/v1;
			else
				days4=(p/v1)+1;
			count4=days4+(d1-1);
			cout<<count4<<endl;
		}
		else if(p==((d2-d1)*v1)){
			days5=p/v1;
			cout<<days5<<endl;
		}
		else {
			count5=(d2-d1);
			int add3=v1+v2;
			if((p-((d2-d1)*v1))%add3==0)
				count5+=(p-((d2-d1)*v1))/add3;
			else
				count5+=((p-((d2-d1)*v1))/add3)+1;
			count5+=d1-1;
			cout<<count5<<endl;
		}
	}
	return 0;
}