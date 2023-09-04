#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin>>n>>m;
	string key,val;
	string check;
	map<string,string>map;
	for(int i=0;i<n;i++){
		cin>>key>>val;
		map.insert({key,val});
	}
	for(int i=0;i<m;i++){
		cin>>check;
		cout<<map[check]<<"\n";
	}
}
