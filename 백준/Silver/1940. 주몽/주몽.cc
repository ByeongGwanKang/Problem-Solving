#include <bits/stdc++.h> 
using namespace std;


int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	int cnt=0;
	cin>>n>>m;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	int start=0;
	int fin=n-1;
	while(start<fin){
		if(v[start]+v[fin]>m){
			fin--;
		}
		else if (v[start]+v[fin]<m){
			start++;
		}
		else {
			start++;
			fin--;
			cnt++;
		}
	}
	cout<<cnt;


	return 0;
}