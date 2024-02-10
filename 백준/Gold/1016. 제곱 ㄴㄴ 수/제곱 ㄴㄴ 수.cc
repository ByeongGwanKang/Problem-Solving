#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	long long a,b;
	cin>>a>>b;
	vector<bool>v(b-a+1,true);
	for(long long i=2;i*i<=b;i++){
		long long pow=i*i;
		long long start=a/pow;
		if(a%pow!=0){
			start++;
		}
		for(long long j=pow*start;j<=b;j+=pow){
			v[j-a]=false;
		}
	}
	int cnt=0;
	for(auto a:v){
		if(a==true){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}