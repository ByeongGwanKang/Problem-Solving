#include <bits/stdc++.h>
using namespace std;

vector<int>v;
int find(int k);
void unionfunc(int a,int b);
	
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin>>n>>m;
	v.resize(n+1);
	for(int i=0;i<=n;i++){
		v[i]=i;
	}
	for(int i=0;i<m;i++){
		int a,b,c;
		cin>>a>>b>>c;
		if(a==0){
			unionfunc(b,c);
		}
		if(a==1){
			if(find(b)==find(c)){
				cout<<"YES\n";
			}
			else {
				cout<<"NO\n";
			}
		}
	}
	return 0;
}

void unionfunc(int a,int b){
	a=find(a);
	b=find(b);
	if(a!=b){
		v[b]=a;
	}
}
//대표노드찾기
int find(int k){
	if(v[k]==k){
		return k;
	}
	else{
		return v[k]=find(v[k]);
	}
}