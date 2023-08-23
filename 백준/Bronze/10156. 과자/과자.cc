#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int k,n,m;
	cin>>k>>n>>m;
	if(k*n-m>=0)
		cout<<k*n-m;
	else cout<<0;
}
