#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int max=0;
	vector<pair<int,int> >v(n);
	for(int i=0;i<n;i++){
		cin>>v[i].first;
		v[i].second = i;
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		if(v[i].second-i>max)
			max = v[i].second-i;
	}
	cout<<max+1;
	return 0;
}
