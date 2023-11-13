#include <bits/stdc++.h>
using namespace std;

int n,m;
int graph[1001][1001]={0,};
int water[1001][1001];
bool vis[1001][1001]={false,};
queue<pair<int,int>>q;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
void bfs(){
	while(!q.empty()){
		int x=q.front().first;
		int y=q.front().second;
		water[x][y]=0;
		q.pop();
		for(int i=0;i<4;i++){
			int nowx=x+dx[i];
			int nowy=y+dy[i];
			if(nowx<0||nowy<0||nowx>=n||nowy>=m){
				continue;
			}
			if(vis[nowx][nowy]==false&&graph[nowx][nowy]>=graph[x][y]){
				vis[nowx][nowy]=true;
				q.push({nowx,nowy});
			}
		}
	}
}
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	fill(&water[0][0],&water[1000][1001],1);
	int ans=0;
	cin>>n>>m;
	int h,w;
	cin>>h>>w;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>graph[i][j];
		}
	}
	int k;
	cin>>k;
	for(int i=0;i<k;i++){
		int a,b;
		cin>>a>>b;
		a--;
		b--;
		q.push({a,b});
		vis[a][b]=true;
		}
	bfs();
	int sum[1001][1001];
	copy(&water[0][0],&water[0][0]+1000000,&sum[0][0]);
	for(int i=1;i<n;i++){
		sum[i][0]=sum[i-1][0]+sum[i][0];
	}
	for(int i=1;i<m;i++){
		sum[0][i]=sum[0][i-1]+sum[0][i];
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<m;j++){
			sum[i][j]=sum[i-1][j]+sum[i][j-1]+sum[i][j]-sum[i-1][j-1];
		}
	}
	for(int i=h-1;i<n;i++){
		for(int j=w-1;j<m;j++){
			if(i==h-1&&j==w-1){
				if(sum[i][j]==0){
					ans++;
				}
			}
			else if(i==h-1){
				if(sum[i][j]-sum[i][j-w]==0){
					ans++;
				}
			}
			else if(j==w-1){
				if(sum[i][j]-sum[i-h][j]==0){
					ans++;
				}
			}
			else{
				if(sum[i][j]-sum[i-h][j]-sum[i][j-w]+sum[i-h][j-w]==0){
					ans++;
				}
			}
		}
	}
	cout<<ans;
	/*
	cout<<"\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<sum[i][j]<<" ";
		}
		cout<<"\n";
	}
	*/
    return 0;
}
