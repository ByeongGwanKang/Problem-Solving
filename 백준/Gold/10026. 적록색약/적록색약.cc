#include <bits/stdc++.h> 
using namespace std;

int n;
static vector<string> v;
bool visited[101][101]={false,};
bool visited_sm[101][101]={false,};
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
void dfs(int x, int y);
void dfs_sm(int x, int y);

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n;
	int cnt=0;
	int cnt_sm=0;
	v=vector<string>(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(visited[i][j]==false){
				cnt++;
				dfs(i,j);
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(v[i][j]=='G')
				v[i][j]='R';
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(visited_sm[i][j]==false){
				cnt_sm++;
				dfs_sm(i,j);
			}
		}
	}
	cout<<cnt<<" "<<cnt_sm;
	return 0;
}

void dfs(int x, int y){
	visited[x][y]=true;
	for(int i=0;i<4;i++){
		int newx=x+dx[i];
		int newy=y+dy[i];
		if(newx>=0&&newx<n&&newy>=0&&newy<n){
			if(v[newx][newy]==v[x][y]&&visited[newx][newy]==false){
				dfs(newx,newy);
			}
		}
	}
}

void dfs_sm(int x, int y){
	visited_sm[x][y]=true;
	for(int i=0;i<4;i++){
		int newx=x+dx[i];
		int newy=y+dy[i];
		if(newx>=0&&newx<n&&newy>=0&&newy<n){
			if(v[newx][newy]==v[x][y]&&visited_sm[newx][newy]==false){
				dfs_sm(newx,newy);
			}
		}
	}
}