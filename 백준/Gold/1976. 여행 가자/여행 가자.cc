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
	for(int i=0;i<=n;i++){
		parent[i]=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int val;
			cin>>val;
			if(val==1){
				unionfunc(i,j);
			}
		}
	}
	int plan[1001];
	for(int i=0;i<m;i++){
		cin>>plan[i];
	}
	int check=find(plan[0]);
	for(int i=1;i<m;i++){
		if(find(plan[i])!=check){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}

void unionfunc(int a,int b){
	a=find(a);
	b=find(b);
	if(a!=b){
		parent[b]=a;
	}
}
//대표노드찾기
int find(int k){
	if(parent[k]==k){
		return k;
	}
	else{
		return parent[k]=find(parent[k]);
	}
}