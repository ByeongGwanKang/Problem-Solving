#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n;
	cin>>n;
	cin.ignore();
	int idx;
	vector<string> arr(n+1);
	for(int i=0;i<n;i++){
		getline(cin,arr[i]);
		if(arr[i]=="?")
			idx=i;
	}
	int prev;
	if(idx!=0){
		prev = arr[idx-1].length()-1;
	}
	int m;
	cin>>m;
	cin.ignore();
	vector<string> can(m+1);
	for(int i=0;i<m;i++){
		getline(cin,can[i]);
	}
	if(n==1){
			cout<<can[0];
			return 0;
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(arr[j]==can[i]){
				i++;
				j=0;
			}
		}
		int len = can[i].length()-1;
		if(idx==0){
			if(can[i][len]==arr[idx+1][0]){
				cout<<can[i];
			}
		}
		else if(idx==n-1){
			if(can[i][0]==arr[idx-1][prev]){
				cout<<can[i];
			}
		}
		else if(can[i][0]==arr[idx-1][prev]&&can[i][len]==arr[idx+1][0]){
			cout<<can[i];
			return 0;
		}
	}
	return 0;
}