#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	int k;
	cin>>n>>k;
	int start = 1;
	int end = k;
	int ans;
	while(start<=end){
		int mid = (start+end)/2;
		int cnt=0;
		for(int i=1;i<=n;i++){
			cnt+=min(mid/i,n);
		}
		if(cnt<k){
			start=mid+1;
		}
		else {
			ans=mid;
			end=mid-1;
		}
	}
	cout<<ans;
	return 0;
}
