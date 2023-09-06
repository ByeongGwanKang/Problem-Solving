#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	string p;
	string s;
	cin>>n>>m;
	cin>>s;
	int cnt=0;
	for(int i=0;i<n;i++){
		p+="IO";
	}
	p+="I";
	int start_idx=0;
	int end_idx=2*n;
	while(end_idx!=s.length()){
		end_idx++;
		if(s.substr(start_idx++,2*n+1)==p){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}