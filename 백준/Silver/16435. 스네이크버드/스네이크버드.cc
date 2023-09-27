#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,l;
	cin>>n>>l;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	for(auto i:v){
		if(l>=i){
			l++;
		}
	}
	cout<<l;
	
	return 0;
}
