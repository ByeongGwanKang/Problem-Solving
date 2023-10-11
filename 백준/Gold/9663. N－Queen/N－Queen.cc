#include <bits/stdc++.h>
using namespace std;

void nqueen(int y);
int n;
long long cnt=0;
vector<int>col(100);
vector<int>diag1(100);
vector<int>diag2(100);

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n;
	nqueen(0);
	cout<<cnt;
	return 0;
}
void nqueen(int y){
	if(y==n){
		cnt++;
		return;
	}
	for(int x=0;x<n;x++){
		if(col[x]!=0||diag1[x+y]!=0||diag2[n-x+y]!=0){
			continue;
		}
		col[x]=1;
		diag1[x+y]=1;
		diag2[n-x+y]=1;
		nqueen(y+1);
		col[x]=0;
		diag1[x+y]=0;
		diag2[n-x+y]=0;
	}
}