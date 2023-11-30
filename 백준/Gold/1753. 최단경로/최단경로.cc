#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int v,e;
	cin>>v>>e;
	int k;
	cin>>k;
	vector<pair<int,int>>list[20001];
	vector<bool>visited(v+1,false);
	vector<int>dist(v+1,INT_MAX);
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
	//인접리스트 초기화
	for(int i=0;i<e;i++){
		int a,b,w;
		cin>>a>>b>>w;
		list[a].push_back({b,w});
	}
	dist[k]=0;
	//우선순위큐 입력방식 (가중치, 노드번호)
	pq.push({0,k});
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
	for(int i=1;i<=v;i++){
		if(visited[i]==false){
			cout<<"INF\n";
		}
		else{
			cout<<dist[i]<<"\n";
		}
	}
	return 0;
}
