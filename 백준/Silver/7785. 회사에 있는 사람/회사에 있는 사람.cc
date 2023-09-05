#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	set <string> s;
	for(int i=0;i<n;i++){
		string str, mr;
		cin>>str>>mr;
		if(mr=="enter")
			s.insert(str);
		else s.erase(str);
	}
	for(auto iter=s.rbegin();iter!=s.rend();iter++){
		cout<<*iter<<"\n";
	}

}
