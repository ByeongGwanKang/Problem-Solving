#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin>>n>>m;
	string s;
	int ans=0;
	int cnt;
	for(int i=0;i<n;i++){
		cnt=0;
		cin>>s;
		for(int j=0;j<m;j++){
			if(s[j]=='O'){
				cnt++;
			}
		}
		if(cnt>m/2){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
