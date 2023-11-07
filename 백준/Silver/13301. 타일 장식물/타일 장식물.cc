#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
    int n;
	cin>>n;
	vector<long long>pib(n+1);
	pib[0]=1;
	pib[1]=1;
	for(int i=2;i<=n;i++){
		pib[i]=pib[i-1]+pib[i-2];
	}
	cout<<pib[n-1]*2+pib[n]*2;
	return 0;
}