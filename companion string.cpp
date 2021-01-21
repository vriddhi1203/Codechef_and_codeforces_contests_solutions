#include <bits/stdc++.h>
using namespace std;

int distinctsubstrings(string s){
	set<string> answer;
	for(int i=0;i<=s.length();i++){
		for(int j=1;j<=s.length()-i;j++){
			answer.insert(s.substr(i,j));
		}
	}
	return answer.size();
}

int main(){
	string s1,s2;
	cin>>s1;
	cin>>s2;
	int count1=0,count2=0;
	count1=distinctsubstrings(s1);
	count2=distinctsubstrings(s2);
	if(count1==count2)
		cout<<"Companion"<<endl;
	else
		cout<<"Non Companion"<<endl;
	return 0;
}