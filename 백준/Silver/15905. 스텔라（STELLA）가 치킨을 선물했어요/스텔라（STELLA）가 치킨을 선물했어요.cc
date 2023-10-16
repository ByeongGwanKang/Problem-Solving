#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int cnt=0;
	vector<pair<int,int>>v(n);
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		v[i]={-a,b};
	}
	sort(v.begin(),v.end());
	int five=v[4].first;
	for(int i=5;i<n;i++){
		if(v[i].first==five){
			cnt++;
		}
		else{
			break;
		}
	}
	cout<<cnt;
	return 0;
}
