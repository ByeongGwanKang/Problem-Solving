#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n,m;
	cin>>n>>m;
	int cnt=0;
	int money=0;
	vector<int> six_v(m);
	vector<int> v(m);
	for(int i=0;i<m;i++){
		cin>>six_v[i]>>v[i];
	}
	sort(six_v.begin(),six_v.end());
	sort(v.begin(),v.end());
	if(n<6){
		money+=((six_v[0]<(v[0]*n))?six_v[0]:v[0]*n);
	}
	else{
		for(int i=n;i>=6;i=i-6){
			money+=((six_v[0]<(v[0]*6))?six_v[0]:v[0]*6);
			cnt=i;
		}
		cnt-=6;
		if(cnt<6){
			money+=((six_v[0]<(v[0]*cnt))?six_v[0]:v[0]*cnt);
		}
	}
	cout<<money;
	return 0;
}