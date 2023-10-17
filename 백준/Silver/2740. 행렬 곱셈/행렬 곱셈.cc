#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin>>n>>m;
	int a[101][101]={0,};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	int k;
	cin>>m>>k;
	int b[101][101]={0,};
	for(int i=0;i<m;i++){
		for(int j=0;j<k;j++){
			cin>>b[i][j];
		}
	}
	int res[101][101]={0,};
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			for(int k=0;k<m;k++){
				res[i][j]+=a[i][k]*b[k][j];
			}
			cout<<res[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
