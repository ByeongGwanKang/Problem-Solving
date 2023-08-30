#include <bits/stdc++.h> 
using namespace std;

struct compare{
	bool operator()(int a,int b){
		int a_abs=abs(a);
		int b_abs=abs(b);
		if(a_abs==b_abs)
			return a>b;
		else return a_abs>b_abs;
	}
};
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	priority_queue<int,vector<int>,compare> q;
	int n;
	cin>>n;
	int val;
	for(int i=0;i<n;i++){
		cin>>val;
		if(val==0){
			if(q.empty())
				cout<<0<<"\n";
			else {
				cout<<q.top()<<"\n";
				q.pop();
			}
		}
		else q.push(val);
	}
			
}
