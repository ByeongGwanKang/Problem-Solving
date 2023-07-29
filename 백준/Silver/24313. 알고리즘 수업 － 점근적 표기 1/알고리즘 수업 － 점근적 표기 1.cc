#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int a,b,c,n;
	cin>>a>>b>>c>>n;
	if(a*n+b<=c*n&&c>=a)
		cout<<1;
	else cout<<0;
	return 0;
}
