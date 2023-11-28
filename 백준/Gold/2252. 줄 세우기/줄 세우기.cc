#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin>>n>>m;
	vector<int>v[32001];
	vector<int>degree(n+1);
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		degree[b]++;
	}
	queue<int>q;
	for(int i=1;i<=n;i++){
		if(degree[i]==0){
			q.push(i);
		}
	}
	while(!q.empty()){
		int now=q.front();
		q.pop();
		for(int i=0;i<v[now].size();i++){
			degree[v[now][i]]--;
			if(degree[v[now][i]]==0){
				q.push(v[now][i]);
			}
		}
		cout<<now<<" ";
	}
	return 0;
}
