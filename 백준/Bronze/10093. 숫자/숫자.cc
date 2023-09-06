#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	long long n,m;
	cin>>n>>m;
	if(n==m)
		cout<<0;
	else{
		cout<<max(n,m)-min(n,m)-1<<"\n";
		for(long long i = min(n,m)+1;i<max(n,m);i++){
			cout<<i<<" ";
		}
	}
}
