#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,k;
	cin>>n>>k;
	int cnt=0;
	for(int i=1;i<=n;i++){
		int temp=i;
		for(int j=2;j<=k;j++){
			while(temp%j==0){
				temp/=j;
			}
		}
		if(temp==1){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}