#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	queue<int>q;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		q.push(i);
	}
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
		q.push(q.front());
		q.pop();
	}
	return 0;
}
