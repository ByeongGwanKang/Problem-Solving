#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	int x;
	cin>>x;
	int start=0;
	int end=n-1;
	int cnt=0;
	while(start<end){
		if(v[start]+v[end]>x){
			end--;
		}
		else if(v[start]+v[end]<x){
			start++;
		}
		else{
			end--;
			start++;
			cnt++;
		}
	}
	cout<<cnt;
}
