#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin>>n>>m;
	if(m<=2){
		cout<<"NEWBIE!";
	}
	else if(m<=n){
		cout<<"OLDBIE!";
	}
	else{
		cout<<"TLE!";
	}
	return 0;
}
