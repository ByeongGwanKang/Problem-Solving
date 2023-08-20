#include <bits/stdc++.h> 
using namespace std;


int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	long long n=1;
	int m;
	cin>>m;
	for(int i=1;i<=m;i++){
		n*=i;
	}
	cout<<n;
	return 0;
}