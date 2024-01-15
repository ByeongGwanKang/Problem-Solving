#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int a,b,c;
	cin>>a>>b>>c;
	int ans=min(a,n)+min(b,n)+min(c,n);
	cout<<ans;
	return 0;
}
