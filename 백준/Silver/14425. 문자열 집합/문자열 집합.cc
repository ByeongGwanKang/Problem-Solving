#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	set <string> s;
	int n,m;
	cin>>n>>m;
	int cnt=0;
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		s.insert(str);
	}
	for(int i=0;i<m;i++){
		string str;
		cin>>str;
		if(s.find(str)!=s.end()){
			cnt++;
		}
	}
	cout<<cnt;
}
