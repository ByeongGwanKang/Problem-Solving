#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int a,b,c,n;
	cin>>a>>b>>c>>n;
	if(c*n<=a*n+b&&c<=a){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
}