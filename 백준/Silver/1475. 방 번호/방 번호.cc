#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	string str;
	cin>>str;
	vector<int>v(10,0);
	int ans=0;
	for(int i=0;i<str.length();++i){
		v[str[i]-'0']++;
	}
	while(v[6]>v[9]){
		v[6]--;
		v[9]++;
	}
	while(v[6]<v[9]){
		v[9]--;
		v[6]++;
	}
	for(int i=0;i<10;i++){
		ans=max(v[i],ans);
	}
	cout<<ans;
}
