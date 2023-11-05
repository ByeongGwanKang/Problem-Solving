#include <bits/stdc++.h>
using namespace std;

long long bigpow(int a,int b,int c){
	if(b==1){
		return a%c;
	}
	long long val=bigpow(a,b/2,c);
	val=val*val%c;
	if(b%2==0){
		return val;
	}
	return val*a%c;
}
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	long long a,b,c;
	cin>>a>>b>>c;
	bigpow(a,b,c);
	cout<<bigpow(a,b,c);
	return 0;
}
