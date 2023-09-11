#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	vector<int>day(n+2);
	vector<int>money(n+2);
	vector<int>dp(n+2);
	for(int i=1;i<=n;i++){
		cin>>day[i]>>money[i];
	}
	for(int i=n;i>=1;i--){	//거꾸로 생각하기
		if(day[i]+i>n+1){
			dp[i]=dp[i+1];
		}
		else{
			dp[i]=max(dp[i+1], dp[day[i]+i]+money[i]);	//회의 안했을때,했을때
		}
	}
	cout<<dp[1];
	return 0;
}
