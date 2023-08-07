#include <bits/stdc++.h> 
using namespace std;
int main(void){
	ios::sync_with_stdio(0); 
	cin.tie(0);
	int n,m,q;
	int check,r,v;
	cin>>n>>m>>q;
	vector<int>row(n);
	vector<int>col(m);
	for(int i=0;i<q;i++){
		cin>>check>>r>>v;
		if(check==1)
			row[r-1]+=v;
		else
			col[r-1]+=v;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<col[j]+row[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
