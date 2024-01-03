#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int a,b,c;
	cin>>a>>b>>c;
	int ans;
	ans=min({a,b,c});
	if(a+b+c<100){
		if(ans==a){
			cout<<"Soongsil";
		}
		if(ans==b){
			cout<<"Korea";
		}
		if(ans==c){
			cout<<"Hanyang";
		}
	}
	else{
		cout<<"OK";
	}
	return 0;
}
