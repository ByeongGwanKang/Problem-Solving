#include <bits/stdc++.h> 
using namespace std;
int main(void){
	ios::sync_with_stdio(0); 
	cin.tie(0);
	int n;
	cin>>n;
	int val = n/5;
	if(n%5==0)
		cout<<val;
	else
		cout<<val+1;
	return 0;
}
