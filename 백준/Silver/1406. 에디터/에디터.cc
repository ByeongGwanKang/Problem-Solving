#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	list <char>lt;
	string s;
	cin>>s;
	for(auto i : s){
		lt.push_back(i);
	}
	auto iter=lt.end();
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		char command;
		cin>>command;
		if(command=='L'){
			if(iter!=lt.begin()){
				iter--;
			}
		}
		if(command=='D'){
			if(iter!=lt.end()){
				iter++;
			}
		}
		if(command=='B'){
			if(iter!=lt.begin()){
				iter--;
				iter=lt.erase(iter);
			}
		}
		if(command=='P'){
			char append;
			cin>>append;
			lt.insert(iter,append);
		}
	}
	for(auto i:lt){
		cout<<i;
	}
    return 0;
}
