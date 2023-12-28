#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	cout<<fixed;
	cout.precision(3);
	vector<double>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	for(int i=0;i<7;i++){
		cout<<v[i]<<"\n";
	}
	return 0;
}
