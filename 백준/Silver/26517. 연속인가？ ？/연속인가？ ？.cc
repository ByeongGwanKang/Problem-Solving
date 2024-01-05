#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	long long k;
	cin>>k;
	long long a,b,c,d;
	cin>>a>>b>>c>>d;
	long long lhs=a*k+b;
	long long rhs=c*k+d;
	if(lhs==rhs){
		cout<<"Yes"<<" "<<lhs;
	}
	else{
		cout<<"No";
	}
	return 0;
}
