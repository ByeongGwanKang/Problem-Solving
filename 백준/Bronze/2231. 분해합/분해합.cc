#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n;
	cin>>n;
	int sum;
	for(int i=max(1,n-100);i<n;i++){
		sum=0;
		for(int j=i;j>0;){
			sum+=j%10;
			j/=10;
		}
		sum+=i;
		if(sum==n){
			cout<<i;
			return 0;
		}
	}
	cout<<0;
	return 0;
}
