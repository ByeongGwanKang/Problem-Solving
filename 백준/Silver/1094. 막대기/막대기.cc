#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int x;
	cin>>x;
	int cnt=0;
	while(x){
		if(x%2==1){
			cnt++;
		}
		x/=2;
	}
	cout<<cnt;
	return 0;
}