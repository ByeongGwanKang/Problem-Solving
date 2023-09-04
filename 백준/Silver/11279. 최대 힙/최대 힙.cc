#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	priority_queue<int> q;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int val;
		cin>>val;
		if(val!=0)
			q.push(val);
		else{
			if(q.empty())
				cout<<0<<"\n";
			else{
			cout<<q.top()<<"\n";
			q.pop();
			}
		}
	}
}
