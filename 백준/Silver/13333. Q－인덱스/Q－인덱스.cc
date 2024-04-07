#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	vector<int>v(1001);
	for(int i=0;i<n;i++){
		int val;
		cin>>v[i];
	}
	for(int i=n;i>=0;i--){
		int cnt=0;
		for(int j=0;j<n;j++){
			if(v[j]>=i){
				cnt++;
			}
		}
		if(cnt>=i){
			cout<<i;
			return 0;
		}
	}
	return 0;
}