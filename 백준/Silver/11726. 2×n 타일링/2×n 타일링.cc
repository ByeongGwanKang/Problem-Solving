#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	vector<int> dp(n+1);
	dp[1]=1;
	dp[2]=2;
	for(int i=3;i<=n;i++){
		dp[i]=dp[i-2]+dp[i-1];
		if(dp[i]>10007)
			dp[i]=dp[i]%10007;
	}
	cout<<dp[n];
}
