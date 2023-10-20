#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	vector<string>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	vector<string>inc=v;
	vector<string>dec=v;
	sort(inc.begin(),inc.end());
	sort(dec.rbegin(),dec.rend());
	if(v==inc){
		cout<<"INCREASING";
	}
	else if(v==dec){
		cout<<"DECREASING";
	}
	else {
		cout<<"NEITHER";
	}
	return 0;
}
