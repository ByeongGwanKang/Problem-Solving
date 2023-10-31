#include <bits/stdc++.h>
using namespace std;


int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	if(n/10==n%10){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
}
