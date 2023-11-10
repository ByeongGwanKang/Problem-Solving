#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	long long arr[101][10]={0,};
	for(int i=1;i<=9;i++){
		arr[1][i]=1;
	}
	int n;
	cin>>n;
	for(int i=2;i<=n;i++){
		for(int j=0;j<=9;j++){
			if(j==0){
				arr[i][j]=arr[i-1][j+1];
			}
			else if(j==9){
				arr[i][j]=arr[i-1][j-1];
			}
			else{
				arr[i][j]=arr[i-1][j-1]+arr[i-1][j+1];
			}
			arr[i][j]%=1000000000;
		}
	}
	long long sum=0;
	for(int j=0;j<=9;j++){
		sum+=arr[n][j];
		if(sum>=1000000000){
			sum%=1000000000;
		}
	}
	cout<<sum;
    return 0;
}
