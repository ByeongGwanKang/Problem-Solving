#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int a,b;
	cin>>a>>b;
	vector<int>v(a+b);
	for(int i=0;i<a+b;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	v.erase(unique(v.begin(),v.end()),v.end());
	int len = v.size();
	cout<<2*len-a-b;
	
	return 0;
}
