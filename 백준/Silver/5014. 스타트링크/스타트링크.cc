#include <bits/stdc++.h> 
using namespace std;

int f,s,g,u,d;
vector<bool>vis;
queue<pair<int,int>>q;
bool ansflag=false;
void bfs(){
	while(!q.empty()){
		int now=q.front().first;
		int cnt=q.front().second;
		if(now==g){
			cout<<cnt;
			ansflag=true;
			break;
		}
		q.pop();
		int up=now+u;
		int down=now-d;
		if(up<=f&&vis[up]==false){
			q.push({up,cnt+1});
			vis[up]=true;
		}
		if(down>0&&vis[down]==false){
			q.push({down,cnt+1});
			vis[down]=true;
		}
	}
}
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>f>>s>>g>>u>>d;
	vis.resize(f+1);
	vis[s]=true;
	q.push({s,0});
	bfs();
	if(!ansflag){
		cout<<"use the stairs";
	}
	return 0;
}