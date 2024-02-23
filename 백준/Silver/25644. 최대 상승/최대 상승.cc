#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	vector<int>v(n);
	int low=INT_MAX;
	int gap=0;
	for(int i=0;i<n;i++){
		int val;
		cin>>val;
		if(low>val){
			low=val;
		}
		else if(gap<val-low){
			gap=val-low;
		}
	}
	cout<<gap;
	return 0;
}