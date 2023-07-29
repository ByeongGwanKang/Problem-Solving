#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	long long n;
	cin>>n;
	int check=0;
	if(n==1){
		cout<<1;
		return 0;
	}
	while(true){
		if(n==2){
			cout<<1;
			return 0;
		}
		if(n%2==0){
			n/=2;
		}
		else {
			cout<<0;
			return 0;
		}
		
	}
	return 0;
}