#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	deque<int>d;
	int n,m;
	cin>>n>>m;
	int cnt=0;
	for(int i=1;i<=n;i++){
		d.push_back(i);
	}
	while(m--){
		int now;
		cin>>now;
		int idx=find(d.begin(),d.end(),now)-d.begin();
		while(d.front()!=now){
			if(idx<d.size()-idx){
				d.push_back(d.front());
				d.pop_front();
				cnt++;
			}
			else{
				d.push_front(d.back());
				d.pop_back();
				cnt++;
			}
		}
		d.pop_front();	
	}
	cout<<cnt;
	return 0;
}