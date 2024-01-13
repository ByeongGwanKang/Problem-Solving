#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int a,r;
	cin>>a>>r;
	cout<<fixed;
	cout.precision(6);
	double ans=2*a+3.141592*r*2;
	cout<<ans;
	return 0;
}
