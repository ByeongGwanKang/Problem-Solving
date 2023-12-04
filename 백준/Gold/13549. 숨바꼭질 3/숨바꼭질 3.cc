#include <bits/stdc++.h> 
using namespace std;


void bfs();
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
int n,k;
vector<bool> visited(100001,false);

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>k;
	q.push(make_pair(0,n));
	bfs();
	return 0;
}

void bfs(){
	while(!q.empty()){
		int now=q.top().second;
		int count=q.top().first;
		if(now==k){
			cout<<count;
			break;
		}
		q.pop();
		if(now*2<=100000){
			if(visited[now*2]==false){
				q.push(make_pair(count,now*2));
				visited[now*2]=true;
			}
		}
		if(now+1<=100000){
			if(visited[now+1]==false){
				q.push(make_pair(count+1,now+1));
				visited[now+1]=true;
			}
		}
		if(now-1>=0){
			if(visited[now-1]==false){
				q.push(make_pair(count+1,now-1));
				visited[now-1]=true;
			}
		}
	}
}