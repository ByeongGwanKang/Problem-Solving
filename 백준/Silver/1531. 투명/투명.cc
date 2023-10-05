#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int picture[101][101]={0,};
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		for(int j=a;j<=c;j++){
			for(int k=b;k<=d;k++){
				picture[j][k]++;
			}
		}
	}
	int cnt=0;
	for(int i=1;i<=100;i++){
		for(int j=1;j<=100;j++){
			if(picture[i][j]>m){
				cnt++;
			}
		}
	}
	cout<<cnt;
		
	return 0;
}