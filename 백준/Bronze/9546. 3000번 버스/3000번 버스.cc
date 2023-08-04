#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	int n;
	for(int i=0;i<t;i++){
		cin>>n;
		int res=0;
		for(int j=0;j<n;j++){
			res=(res*2+1);
		}
		cout<<res<<"\n";
	}
	return 0;
}
