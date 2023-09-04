#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin>>n>>m;
	int big=0;
	vector<int>v(n+1);
	for(int i=0;i<n;i++){
		cin>>v[i];
		if(v[i]>big)
			big=v[i];
	}
	int ans=0;
	int start = 0;
	int end = big;
	while(start<=end){
		int mid = (start+end)/2;
		long long cnt=0;
		for(int i=0;i<n;i++){
			if(v[i]>mid){
				cnt+=(v[i]-mid);
			}
		}
		if(cnt>=m){
			ans=mid;
			start=mid+1;
		}
		else {
			end=mid-1;
		}
	}
	cout<<ans;
	return 0;
}