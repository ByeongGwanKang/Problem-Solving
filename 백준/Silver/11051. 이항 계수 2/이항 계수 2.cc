#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int arr[1005][1005];
	int n,k;
	cin>>n>>k;
	for(int i=0;i<=n;i++){
		arr[i][0]=1;	//i개중 0개 선택
		arr[i][i]=1;	//i개중 i개 선택
		arr[i][1]=i;	//i개중 1개 선택
	}
	for(int i=2;i<=n;i++){
		for(int j=2;j<=i;j++){
			arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
			arr[i][j]%=10007;
		}
	}
	cout<<arr[n][k];
	return 0;
}