#include <bits/stdc++.h>
using namespace std;


int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	long long m;
	cin>>n>>m;
	vector<long long>v(n+1,0);
	for(int i=1;i<=n;i++){
		if(i==1){
			cin>>v[i];
		}
		else{
			long long val;
			cin>>val;
			v[i]=val+v[i-1];
		}
	}
	int s=0,e=0;
	int cnt=0;
	while(e<=n){
		if(v[e]-v[s]<m){
			e++;
		}
		else if(v[e]-v[s]>m){
			s++;
		}
		else{
			cnt++;
			e++;
			s++;
		}
	}
	cout<<cnt;
    return 0;
}
