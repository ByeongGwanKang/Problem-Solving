#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t,n;
	cin>>t;
	vector<long long> v(100);
	v[0]=1;
	v[1]=1;
	v[2]=1;
	v[3]=2;
	v[4]=2;
	for(int i=5;i<100;i++){
		v[i]=v[i-1]+v[i-5];
	}
	for(int i=0;i<t;i++){
		cin>>n;
		cout<<v[n-1]<<"\n";
	}
	return 0;
}