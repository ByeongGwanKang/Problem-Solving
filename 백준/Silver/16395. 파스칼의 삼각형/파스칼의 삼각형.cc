#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n,k;
	cin>>n>>k;
	vector<vector<int> > arr(n+1,vector<int>(n+1,0));
	arr[0][0]=1;
	arr[1][0]=1;
	arr[1][1]=1;
	for(int i=2;i<n;i++){
		for(int j=0;j<=i;j++){
			if(j==0||j==i)
				arr[i][j]=1;
			else arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
		}
	}
	cout<<arr[n-1][k-1];
	return 0;
}