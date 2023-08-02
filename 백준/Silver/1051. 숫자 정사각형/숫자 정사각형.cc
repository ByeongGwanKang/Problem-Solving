#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n,m;
	cin>>n>>m;
	string str;
	vector<vector<int> >arr(n,vector<int>(m));
	for(int i=0;i<n;i++){
		cin>>str;
		for(int j=0;j<str.length();j++){
			arr[i][j]=str[j]-'0';
		}
	}
	int res = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			for(int k=1;;k++){
				if(j+k>=m||i+k>=n)
					break;
				if(arr[i][j]==arr[i+k][j+k]&&arr[i][j+k]==arr[i+k][j]&&arr[i][j]==arr[i+k][j]){
					if(res<k) res=k;
				}
			}
		}
	}
	cout<<(res+1)*(res+1);
	return 0;
}