#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	vector<int>arr(n+1);
	vector<int>ans(n+1);
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	ans[0]=0;
	ans[1]=arr[1];
	ans[2]=ans[1]+arr[2];
	for(int i=3;i<=n;i++){
		ans[i]=max(ans[i-2]+arr[i],ans[i-3]+arr[i-1]+arr[i]);
	}
	cout<<ans[n];
	return 0;
}
