#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,s,r;
	cin>>n>>s>>r;
	int cnt=0;
	vector<int>v(n+1,1);
	for(int i=0;i<s;i++){
		int dmg;
		cin>>dmg;
		v[dmg]--;
	}
	for(int i=0;i<r;i++){
		int plus;
		cin>>plus;
		v[plus]++;
	}
	for(int i=1;i<=n;i++){
		if(v[i]==0){
			if(v[i-1]==2){
				v[i-1]--;
				v[i]++;
			}
			else if(v[i+1]==2){
				v[i+1]--;
				v[i]++;
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(v[i]==0){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
