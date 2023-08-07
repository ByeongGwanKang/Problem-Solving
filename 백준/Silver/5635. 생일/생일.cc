#include <bits/stdc++.h> 
using namespace std;
int main(void){
	ios::sync_with_stdio(0); 
	cin.tie(0);
	int n;
	cin>>n;
	vector<pair<pair<int,int>,pair<int,string>>> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i].second.second>>arr[i].second.first>>arr[i].first.second>>arr[i].first.first;
	}
	sort(arr.begin(),arr.end());
	cout<<arr[n-1].second.second<<"\n";
	cout<<arr[0].second.second;
	return 0;
}
