#include <bits/stdc++.h> 
using namespace std;
int main(void){
	ios::sync_with_stdio(0); 
	cin.tie(0);
	string str;
	int check;

	while(true){
		check=0;
		getline(cin,str);
		if(str==".")
			return 0;
		stack <char> s;
		for(int i=0;i<str.length();i++){
			if(str[i]=='('||str[i]=='['){
				s.push(str[i]);
			}
			else if(str[i]==')'){
				if(!s.empty()&&s.top()=='(')
					s.pop();
				else {
					check=1;
					break;
				}
			}
			else if(str[i]==']'){
				if(!s.empty()&&s.top()=='[')
					s.pop();
				else {
					check=1;
					break;
				}
			}
		}
		if(check==0&&s.empty())
			cout<<"yes\n";
		else cout<<"no\n";
		
		
	}
	return 0;
}
