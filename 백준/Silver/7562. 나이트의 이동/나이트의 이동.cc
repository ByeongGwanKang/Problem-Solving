#include <bits/stdc++.h> 
using namespace std;

int l;
queue <pair<int,int>>q;
vector<vector<int>>chess;
vector<vector<bool>>visited;
void clear(queue<pair<int,int>>&q){
	queue<pair<int,int>>empty;
	swap(q,empty);
}
int dx[]={1,2,1,2,-1,-2,-1,-2};
int dy[]={2,1,-2,-1,2,1,-2,-1};
void bfs();

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		clear(q);
		cin>>l;
		chess=vector<vector<int>>(l,vector<int>(l,0));
		visited=vector<vector<bool>>(l,vector<bool>(l,false));
		int start_a,start_b,end_a,end_b;
		cin>>start_a>>start_b>>end_a>>end_b;
		q.push(make_pair(start_a,start_b));
		bfs();
		cout<<chess[end_a][end_b]<<"\n";
	}
}

void bfs(){
	while(!q.empty()){
		int now_a=q.front().first;
		int now_b=q.front().second;
		visited[now_a][now_b]=true;
		q.pop();
		for(int i=0;i<8;i++){
			int n=now_a+dx[i]; //오류나면 확인
			int m=now_b+dy[i];
			if(n>=0&&n<l&&m>=0&&m<l){
				if(visited[n][m]==false){
					q.push(make_pair(n,m));
					visited[n][m]=true;
					chess[n][m]=chess[now_a][now_b]+1;
				}
			}
		}
	}
}