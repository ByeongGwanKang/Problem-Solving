#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	cin.ignore();
	string str;
	stack <char> stack;
	for(int i=0;i<t;i++){
		getline(cin,str);
		str+=" ";
		for(int j=0;j<str.length();j++){
			if(str[j]==' '){
				while(!stack.empty()){
					cout<<stack.top();
					stack.pop();
				}
				cout<<" ";
			}
			else stack.push(str[j]);
		}
		cout<<"\n";
	}
	return 0;
}