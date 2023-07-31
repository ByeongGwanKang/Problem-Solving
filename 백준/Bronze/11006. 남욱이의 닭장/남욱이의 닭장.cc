#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	int n,m,temp;
	for(int i=0;i<t;i++){
		cin>>n>>m;
		temp = m*2-n;
		cout<<temp<<" "<<m-temp<<"\n";
	}
	return 0;
}
