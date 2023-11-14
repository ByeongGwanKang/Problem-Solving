#include <bits/stdc++.h>
using namespace std;

int r,c;
bool flag;
queue<pair<int,int>>fireq;	//불 큐
queue<pair<int,int>>skq;	//상근 큐
string str[1002];
int firedist[1002][1002];	//불 이동
int skdist[1002][1002];	//상근 이동
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
void firebfs(){
	while(!fireq.empty()){
		int x=fireq.front().first;
		int y=fireq.front().second;
		fireq.pop();
		for(int i=0;i<4;i++){
			int nx=x+dx[i];
			int ny=y+dy[i];
			//범위를 벗어난 곳
			if(nx<0||ny<0||nx>=r||ny>=c) continue;
			//이미 방문했거나 벽인 곳
			if(firedist[nx][ny]>=0||str[nx][ny]=='#') continue;
			fireq.push({nx,ny});
			firedist[nx][ny]=firedist[x][y]+1;
		}
	}
}

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	for(int k=0;k<t;k++){
		flag=false;
		cin>>c>>r;
		for(int i=0;i<r;i++){
			fill(skdist[i],skdist[i]+c,-1);
			fill(firedist[i],firedist[i]+c,-1);
			cin>>str[i];
		}
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				if(str[i][j]=='@'){
					skdist[i][j]=0;
					skq.push({i,j});
				}
				if(str[i][j]=='*'){
					firedist[i][j]=0;
					fireq.push({i,j});
				}
			}
		}
		firebfs();
		while(!skq.empty()&&flag==false){
			int x=skq.front().first;
			int y=skq.front().second;
			skq.pop();
			for(int i=0;i<4;i++){
				int nx=x+dx[i];
				int ny=y+dy[i];
				//범위를 벗어나면 탈출한 것이므로 출력 후 종료
				if(nx<0||ny<0||nx>=r||ny>=c) {
					cout<<skdist[x][y]+1<<"\n";
					flag=true;
					while(!skq.empty()){
						skq.pop();
					}
					break;
				}
				//이미 방문했거나 벽이거나 불이 붙은 곳
				if(skdist[nx][ny]>=0||str[nx][ny]=='#') continue;
				if(firedist[nx][ny]!=-1&&firedist[nx][ny]<=skdist[x][y]+1) continue;
				skq.push({nx,ny});
				skdist[nx][ny]=skdist[x][y]+1;
			}
		}
		if(flag==false){
			cout<<"IMPOSSIBLE\n";
		}
	}
    return 0;
}
