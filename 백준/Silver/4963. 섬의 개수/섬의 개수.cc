#include <bits/stdc++.h> 
using namespace std;

int arr[50][50];
bool visited[50][50];
void dfs(int i,int j);
int dx[]={0,1,0,-1,1,1,-1,-1};
int dy[]={1,0,-1,0,1,-1,1,-1};
int cnt=0;
int m,n;
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	while(true){
		cin>>m>>n;
		if(n==0&&m==0)
			return 0;
		cnt=0;
		fill(arr[0],arr[0]+2500,0);
		fill(visited[0],visited[0]+2500,false);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>arr[i][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(arr[i][j]==1&&visited[i][j]==false){
					dfs(i,j);
					cnt++;
				}
			}
		}
		cout<<cnt<<"\n";
	}
	return 0;
}

void dfs(int i,int j){
	visited[i][j]=true;
	
	for(int k=0;k<8;k++){
		int nowi=i+dx[k];
		int nowj=j+dy[k];
		if(nowi>=0&&nowj>=0&&nowi<n&&nowj<m){
			if(visited[nowi][nowj]==false&&arr[nowi][nowj]==1)
				dfs(nowi,nowj);
		}
	}
}