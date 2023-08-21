#include <bits/stdc++.h> 
using namespace std;

typedef pair<int,int> node;
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	stack <pair<int,int>> s;
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		int val;
		cin>>val;
		while(!s.empty()&&s.top().second<val){
			v[s.top().first]=val;
			s.pop();
		}
		s.push(pair(i,val));
	}
	while(!s.empty()){
		v[s.top().first]=-1;
		s.pop();
		}
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	
	return 0;
}
