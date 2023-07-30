#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n;
	cin>>n;
	if(n==1){
		cout<<0;
		return 0;
	}
	vector<int> x(n);
	vector<int> y(n);
	for(int i=0;i<n;i++){
		cin>>x[i]>>y[i];
	}
	sort(x.begin(), x.end());
	sort(y.begin(), y.end());
	cout<<(x[n-1]-x[0])*(y[n-1]-y[0]);
	return 0;
}