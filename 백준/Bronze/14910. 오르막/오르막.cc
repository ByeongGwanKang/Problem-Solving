#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int now=0;
	int prev=-1000000;
	while(!cin.eof()){
		cin>>now;
		if(now<prev){
			cout<<"Bad";
			return 0;
		}
		prev=now;
	}
	cout<<"Good";
	return 0;
}
