#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin>>n>>m;
	int arr[302][302]={0};
	int sum[302][302]={0};
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+arr[i][j];
		}
	}
	int k;
	cin>>k;
	for(int a=0;a<k;a++){
		int i,j,x,y;
		cin>>i>>j>>x>>y;
		cout<<sum[x][y]-sum[i-1][y]-sum[x][j-1]+sum[i-1][j-1]<<"\n";
	}
    return 0;
}
