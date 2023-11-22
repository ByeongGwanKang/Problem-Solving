#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	long long a,b;
	cin>>a>>b;
	if(a*(100-b)/100>=100){
		cout<<0;
	}
	else{
		cout<<1;
	}
	return 0;
}