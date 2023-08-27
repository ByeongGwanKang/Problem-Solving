#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	vector <pair<long long, long long>> v(41);
	v[0]=make_pair(1,0);
	v[1]=make_pair(0,1);
	for(int i=2;i<=40;i++){
		v[i].first=v[i-1].first+v[i-2].first;
		v[i].second=v[i-1].second+v[i-2].second;
	}
	for(int i=0;i<t;i++){
		int k;
		cin>>k;
		cout<<v[k].first<<" "<<v[k].second<<"\n";
	}
}
