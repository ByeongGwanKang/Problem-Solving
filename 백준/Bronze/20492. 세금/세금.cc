#include <bits/stdc++.h> 
using namespace std;


int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int div1=n*22/100;
	int div2=n*20/100*22/100;
	cout<<n-div1<<" "<<n-div2;
	return 0;
}