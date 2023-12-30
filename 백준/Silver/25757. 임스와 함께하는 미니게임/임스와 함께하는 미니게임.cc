#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	set<string>s;
	char c;
	cin>>n>>c;
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		s.insert(str);
	}
	if(c=='Y'){
		cout<<s.size();
	}
	if(c=='F'){
		cout<<s.size()/2;
	}
	if(c=='O'){
		cout<<s.size()/3;
	}
	return 0;
}
