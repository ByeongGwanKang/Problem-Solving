#include <bits/stdc++.h> 
using namespace std;

int n,m;
int cnt=0;
static vector<string> v;
bool visited[601][601]={false,};
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
void dfs(int a,int b);
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>m;
	cin.ignore();
	v.resize(n);
	int a,b;
	for(int i=0;i<n;i++){
		getline(cin,v[i]);
		for(int j=0;j<m;j++){
			if(v[i][j]=='I'){
				a=i;
				b=j;
			}
		}
	}
	dfs(a,b);
	if(cnt==0)
	cout<<"TT";
	else cout<<cnt;
}

void dfs(int a, int b){
	visited[a][b]=true;
	if(v[a][b]=='P')
		cnt++;
	for(int i=0;i<4;i++){
		int x=a+dx[i];
		int y=b+dy[i];
		if(x>=0&&x<n&&y>=0&&y<m){
			if(visited[x][y]==false&&v[x][y]!='X')
				dfs(x,y);
		}
	}
}