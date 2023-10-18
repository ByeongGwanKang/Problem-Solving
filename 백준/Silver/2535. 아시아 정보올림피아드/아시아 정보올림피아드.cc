#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	vector<pair<int,pair<int,int>>>v;
	int n;
	cin>>n;
	vector<int>medals(n+1);
	for(int i=0;i<n;i++){
		int country,num,score;
		cin>>country>>num>>score;
		v.push_back({-score,{country,num}});
	}
	sort(v.begin(),v.end());
	for(int i=0;i<3;i++){
		while(medals[v[i].second.first]==2){
			i++;
		}
		cout<<v[i].second.first<<" "<<v[i].second.second<<"\n";
		medals[v[i].second.first]++;
	}
	return 0;
}
