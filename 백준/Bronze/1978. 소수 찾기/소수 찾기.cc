#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int cnt=0;
	vector<int>v(1001);
	v[1]=1;
	for(int i=2;i<=sqrt(1000);i++){
		for(int j=i+i;j<=1000;j+=i){
			v[j]=1;
		}
	}
	for(int i=0;i<n;i++){
		int val;
		cin>>val;
		if(v[val]==0){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
