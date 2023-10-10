#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int k;
	cin>>k;
	vector<long long> dp(46);
	dp[0]=0;
	dp[1]=1;
	for(int i=2;i<=k;i++){
		dp[i]=dp[i-2]+dp[i-1];
	}
	cout<<dp[k-1]<<" "<<dp[k];
}