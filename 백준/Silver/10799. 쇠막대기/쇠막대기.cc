#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
    stack<char>s;
	string str;
	cin>>str;
	//총 개수
	int ans=0;
	//이전 문자
	char prev;
	for(auto a:str){
		if(s.empty()){
			s.push(a);
		}
		//막대기가 겹쳤을 때
		else if(a=='('){
			s.push(a);
		}
		//막대기가 끝났을 때
		else if(prev==')'){
			s.pop();
			ans++;
		}
		//레이저
		else if(s.top()=='('){
			s.pop();
			ans+=s.size();
			
		}
		prev=a;
	}
	cout<<ans;
	return 0;
}
