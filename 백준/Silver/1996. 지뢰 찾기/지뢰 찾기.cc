#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	cin.ignore();
	vector<string>v(n);
	vector<vector<int>>ans(n,vector<int>(n,0));
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(v[i][j]!='.'){
				for(int k=i-1;k<=i+1;k++){
					for(int l=j-1;l<=j+1;l++){
						if(k<0||l<0||k>=n||l>=n){
							continue;
						}
						if(k==i&&l==j){
							ans[k][l]=-10000;
						}
						else{
							ans[k][l]+=v[i][j]-'0';
						}
					}
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(ans[i][j]<0){
				cout<<"*";
			}
			else if(ans[i][j]>=10){
				cout<<'M';
			}
			else{
				cout<<ans[i][j];
			}
		}
		cout<<"\n";
	}
	return 0;
}