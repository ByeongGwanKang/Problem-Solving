#include <bits/stdc++.h> 
using namespace std;

static vector<vector<int>> v;
static vector<bool> check;
static int ans;
void dfs(int n,int cnt);
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	ans=0;
	cin>>n>>m;
	check = vector<bool>(n+1,false);
	v.resize(n+1);
	for(int i=0;i<m;i++){
		int s,e;
		cin>>s>>e;
		v[s].push_back(e);
		v[e].push_back(s);
	}
	for(int i=0;i<n;i++){
		if (check[i]==false){
			dfs(i,1);
		}
	}
	cout<<ans;
	}

void dfs(int n,int cnt){
	if(cnt==5||ans==1){
		ans=1;
		return;
	}
	check[n]=true;
	for(int i:v[n]){
		if(check[i]==false){
			dfs(i,cnt+1);
		}
	}
	check[n]=false;
}