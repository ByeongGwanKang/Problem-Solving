#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	long long n;
	cin>>n;
	long long cnt=0;
	long long sum=0;
	for(int i=1;i<n-1;i++){
		sum+=i;
		cnt+=sum;
	}

	cout<<cnt<<"\n"<<3;
	return 0;
}
