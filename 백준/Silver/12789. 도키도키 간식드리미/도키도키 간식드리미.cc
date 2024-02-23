#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	queue<int>line;
	stack<int>s;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		line.push(temp);
	}
	int cnt=1;
	while(!line.empty()){
		int now=line.front();
		line.pop();
		//맨앞줄 사람이 해당번호
		if(now==cnt){
			cnt++;
		}
		//맨앞줄사람 스택으로 이동/스택 맨앞사람이 해당번호
		else{
			while(!s.empty()&&s.top()==cnt){
				s.pop();
				cnt++;
			}
			s.push(now);
		}
	}
	while(!s.empty()){
		int now=s.top();
		if(now==cnt){
			cnt++;
			s.pop();
		}
		else{
			break;
		}
	}
	if(cnt==n+1){
		cout<<"Nice";
	}
	else{
		cout<<"Sad";
	}
	return 0;
}