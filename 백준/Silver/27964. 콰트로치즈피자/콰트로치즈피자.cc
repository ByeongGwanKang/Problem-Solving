#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	set<string>s;
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		int len=str.length();
		if(len>=6){
			string temp=str.substr(len-6,6);
			if(temp=="Cheese"){
			s.insert(str);
			}
		}
	}
	if(s.size()>=4){
		cout<<"yummy";
	}
	else{
		cout<<"sad";
	}
	return 0;
}