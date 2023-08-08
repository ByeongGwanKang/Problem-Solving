#include <bits/stdc++.h> 
using namespace std;
int main(void){
	ios::sync_with_stdio(0); 
	cin.tie(0);
	int n;
	cin>>n;
	if(n==0){
		cout<<0;
		return 0;
	}
	double d=(double)n;
	int del = floor(d*3/20+0.5);
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	int sum=0;
	for(int i=del;i<n-del;i++){
		sum+=arr[i];
	}
	double avg = (double)sum/(n-2*del);
	int ans = floor(avg+0.5);
	cout<<ans;
	return 0;
}
