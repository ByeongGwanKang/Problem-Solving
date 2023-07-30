#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	long long n;
	cin>>n;
	int cnt=0;
	for(int i=1;n>=0;i++){
		n-=i;
		cnt++;
	}
	cout<<--cnt;
	return 0;
}