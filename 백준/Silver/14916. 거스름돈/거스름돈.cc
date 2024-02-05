#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int cnt=0;
	vector<int>v(n+1);
	if(n==1||n==3){
		cout<<-1;
		return 0;
	}
	v[1]=10000;
	v[2]=1;
	v[3]=10000;
	v[4]=2;
	v[5]=1;
	for(int i=6;i<=n;i++){
		v[i]=min(v[i-5]+1,v[i-2]+1);
	}
	cout<<v[n];
	return 0;
}