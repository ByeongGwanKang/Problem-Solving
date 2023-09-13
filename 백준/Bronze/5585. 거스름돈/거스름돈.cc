#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int val = 1000-n;
	int ans=0;
	while(val>=500){
		ans++;
		val-=500;
	}
	while(val>=100){
		ans++;
		val-=100;
	}
	while(val>=50){
		ans++;
		val-=50;
	}
	while(val>=10){
		ans++;
		val-=10;
	}
	while(val>=5){
		ans++;
		val-=5;
	}
	while(val>=1){
		ans++;
		val--;
	}
	cout<<ans;
}