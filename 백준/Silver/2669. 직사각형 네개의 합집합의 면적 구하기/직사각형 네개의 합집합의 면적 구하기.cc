#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int arr[101][101]={0,};
	for(int i=0;i<4;i++){
		int a,b,x,y;
		cin>>a>>b>>x>>y;
		for(int j=a;j<x;j++){
			for(int k=b;k<y;k++){
				arr[j][k]=1;
			}
		}
	}
	int cnt=0;
	for(int i=0;i<=100;i++){
		for(int j=0;j<=100;j++){
			if(arr[i][j]==1){
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
