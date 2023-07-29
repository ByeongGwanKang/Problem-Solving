#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	long long n;
	cin>>n;
	long long cnt=0;
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			cnt++;
		}
	}

	cout<<cnt<<"\n"<<2;
	return 0;
}
