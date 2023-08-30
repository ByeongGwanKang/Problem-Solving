#include <bits/stdc++.h> 
using namespace std;

int arr[51][51]={0,};
vector<vector<bool>> visited(51,vector<bool>(false));
void dfs(int i,int j);
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int cnt=0;
		int n,m,k;
		cin>>n>>m>>k;
		memset(arr, 0, sizeof(arr));
		fill(visited.begin(), visited.end(),vector<bool>(51,false));
		for(int j=0;j<k;j++){
			int x,y;
			cin>>x>>y;
			arr[x][y]=1;
		}
		for(int val1=0;val1<n;val1++){
			for(int val2=0;val2<m;val2++){
				if(arr[val1][val2]==1&&visited[val1][val2]==false){
					cnt++;
					dfs(val1,val2);
				}
			}
		}
		cout<<cnt<<"\n";
	}	
	return 0;
}
void dfs(int i,int j){
	visited[i][j]=true;
	for(int k=0;k<4;k++){
		int x=i+dx[k];
		int y=j+dy[k];
		if(x>=0&&y>=0&&arr[x][y]==1&&visited[x][y]==false)
			dfs(x,y);
	}
}