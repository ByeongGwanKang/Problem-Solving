#include <bits/stdc++.h> 
using namespace std;
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int small_idx=1;
	int big_idx=1;
	int sum=1;
	int ans=0;
	while(big_idx<=n){
		if(sum<n){
			big_idx++;
			sum+=big_idx;
		}
		else if(sum>n){
			sum-=small_idx;
			small_idx++;
		}
		else {
			ans++;
			big_idx++;
			sum+=big_idx;
		}
	}
	cout<<ans;
	return 0;
}
