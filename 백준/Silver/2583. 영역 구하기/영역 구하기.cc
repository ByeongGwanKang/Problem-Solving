#include <bits/stdc++.h>
using namespace std;

int m,n,k;
int cnt;
int graph[101][101]={0,};
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
void dfs(int x,int y){
	cnt++;
	for(int i=0;i<4;i++){
		int nowx=x+dx[i];
		int nowy=y+dy[i];
		if(nowx<0||nowy<0||nowx>=m||nowy>=n){
			continue;
		}
		if(graph[nowx][nowy]!=0){
			continue;
		}
		graph[nowx][nowy]++;
		dfs(nowx,nowy);
	}
}
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>m>>n>>k;
	vector<int>ans;
	int operation=0;
	for(int i=0;i<k;i++){
		int ax,ay,bx,by;
		cin>>ax>>ay>>bx>>by;
		for(int j=ax;j<bx;j++){
			for(int p=ay;p<by;p++){
				//직사각형이면 -1
				graph[p][j]=-1;
			}
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(graph[i][j]==0){
				operation++;
				cnt=0;
				graph[i][j]++;
				dfs(i,j);
				ans.push_back(cnt);
			}
		}
	}
	sort(ans.begin(),ans.end());
	cout<<operation<<"\n";
	for(auto a:ans){
		cout<<a<<" ";
	}
	
	return 0;
}
