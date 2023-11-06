#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
    stack<char>s;
	string str;
	cin>>str;
	int sum=0;		//더해질 값
	int mul=1;		//곱해질 값
	for(int i=0;i<str.size();i++){
		if(str[i]=='('){
			mul*=2;
			s.push(str[i]);
		}
		else if(str[i]=='['){
			mul*=3;
			s.push(str[i]);
		}
		else if(str[i]==')'){
			if(s.empty()||s.top()!='('){
				cout<<0;
				return 0;
			}
			if(str[i-1]=='('){
				sum+=mul;
			}
			s.pop();
			mul/=2;
		}
		else{
			if(s.empty()||s.top()!='['){
				cout<<0;
				return 0;
			}
			if(str[i-1]=='['){
				sum+=mul;
			}
			s.pop();
			mul/=3;
		}
	}
	if(s.empty()){
		cout<<sum;
	}
	else{
		cout<<0;
	}
	return 0;
}