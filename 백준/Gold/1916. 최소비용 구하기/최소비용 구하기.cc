#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin>>n>>m;
	vector<pair<int,int>>list[1005];
	vector<bool>visited(n+1,false);
	vector<int>dist(n+1,INT_MAX);
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
	//인접리스트 초기화
	for(int i=0;i<m;i++){
		int a,b,w;
		cin>>a>>b>>w;
		list[a].push_back({b,w});
	}
	int start,end;
	cin>>start>>end;
	dist[start]=0;
	//우선순위큐 입력방식 (가중치, 노드번호)
	pq.push({0,start});
	while(!pq.empty()){
		int now=pq.top().second;
		pq.pop();
		//이미 방문한 노드라면 스킵
		if(visited[now]==true){
			continue;
		}
		visited[now]=true;
		for(int i=0;i<list[now].size();i++){
			//현재 노드+간선의 가중치가 그 값보다 작다면 갱신하고 우선순위큐에 넣음
			if(dist[now]+list[now][i].second<dist[list[now][i].first]){
				dist[list[now][i].first]=dist[now]+list[now][i].second;
				pq.push({dist[list[now][i].first],list[now][i].first});
			}
		}
	}
	cout<<dist[end];
	return 0;
}
