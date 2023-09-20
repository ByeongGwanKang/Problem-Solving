#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	int zero=0;
	int one=0;
	priority_queue<int>plus;
	priority_queue<int,vector<int>,greater<int>>minus;
	cin>>n;
	for(int i=0;i<n;i++){
		int val;
		cin>>val;
		if(val==0){
			zero++;
		}
		else if(val==1){
			one++;
		}
		else if(val>0){
			plus.push(val);
		}
		else{
			minus.push(val);
		}
	}
	int ans=0;
	while(plus.size()>1){
		int a,b;
		a=plus.top();
		plus.pop();
		b=plus.top();
		plus.pop();
		ans+=(a*b);
	}
	while(!plus.empty()){
		ans+=plus.top();
		plus.pop();
	}
	while(minus.size()>1){
		int a,b;
		a=minus.top();
		minus.pop();
		b=minus.top();
		minus.pop();
		ans+=(a*b);
	}
	while(!minus.empty()){
		if(zero!=0){
			minus.pop();
			zero--;
		}
		else{
			ans+=minus.top();
			minus.pop();
		}
	}
	ans+=one;
	cout<<ans;
    return 0;
}
