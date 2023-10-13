#include <bits/stdc++.h>
using namespace std;

vector<int>parent;
int find(int k);
void unionfunc(int a,int b);
	
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin>>n>>m;
	parent.resize(n+1);
	for(int i=1;i<=n;i++){
		parent[i]=i;
	}
	int trueP;
	int cnt=0;
	cin>>trueP;
	if(trueP==0){
		cout<<m;
		return 0;
	}
	int first_true;
	cin>>first_true;
	for(int i=1;i<trueP;i++){
		int val;
		cin>>val;
		unionfunc(first_true,val);
	}
	int party[51][51]={0,};
	for(int i=0;i<m;i++){
		int people;
		cin>>people;
		cin>>party[i][0];
		for(int j=1;j<people;j++){
			cin>>party[i][j];
			unionfunc(party[i][0],party[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		if(find(party[i][0])!=find(first_true)){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
//대표 노드끼리 연결
void unionfunc(int a,int b){
	a=find(a);
	b=find(b);
	if(a!=b){
		parent[b]=a;
	}
}
//대표 노드찾기
int find(int k){
	if(parent[k]==k){
		return k;
	}
	else{
		return parent[k]=find(parent[k]);
	}
}