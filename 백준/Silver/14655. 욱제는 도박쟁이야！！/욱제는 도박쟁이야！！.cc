#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int ans=0;
	for(int i=0;i<2*n;i++){
		int val;
		cin>>val;
		ans+=abs(val);
	}
	cout<<ans;
	return 0;
}