#include <bits/stdc++.h>
using namespace std;

int countplus(int min_no, int max_no){
    int count_plus=0;
	while(max_no%min_no!=0){
			max_no++;
			count_plus++;
		}
	return count_plus;	
}

int countminus(int min_no, int max_no){
	int count_minus=0;
	while(max_no%min_no!=0){
			max_no--;
			count_minus++;
		}
	return count_minus;	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,min_no,max_no;
		cin>>x>>y;
		if(x<y){
            min_no=x;
            max_no=y;
        }
		else if(y<x){
            min_no=y;
            max_no=x;
        }
		else{
			cout<<"0"<<endl;
			continue;
		}
		int count_minus1 = countminus(min_no, max_no);
		int count_plus1 = countplus(min_no, max_no);
		if(count_minus1<count_plus1)
			cout<<count_minus1<<endl;
		else
			cout<<count_plus1<<endl;
		
	}
	return 0;
}