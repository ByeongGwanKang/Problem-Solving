#include <bits/stdc++.h> 
using namespace std;


int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int l,a,b,c,d;
	cin>>l>>a>>b>>c>>d;
	int n,m;
	n=a/c;
	m=b/d;
	if(a%c!=0)
		n++;
	if(b%d!=0)
		m++;
	cout<<l-max(n,m);
}