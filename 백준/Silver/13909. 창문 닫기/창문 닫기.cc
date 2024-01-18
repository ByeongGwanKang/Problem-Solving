#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int cnt=0;
	for(int i=1;i<=sqrt(n);i++){
		cnt++;
	}
	cout<<cnt;
	return 0;
}
