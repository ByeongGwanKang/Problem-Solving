#include <bits/stdc++.h> 
using namespace std;
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m,val;
	long cnt=0;
	cin>>n>>m;
	vector<long>v(n+1,0);
	vector<long>r(m);
	for(int i=1;i<=n;i++){
		cin>>val;
		v[i]=v[i-1]+val;
		v[i] = v[i]%m;
		r[v[i]]++;
	}
		
	for(int i=0;i<m;i++){
		if(i==0)
				cnt+=r[i];
		if(r[i]>1){
			cnt+=r[i]*(r[i]-1)/2;
		}
	}
	cout<<cnt;
	return 0;
}
