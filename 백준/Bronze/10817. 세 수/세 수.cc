#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	vector<int>v(3);
	cin>>v[0]>>v[1]>>v[2];
	sort(v.begin(),v.end());
	cout<<v[1];
}
