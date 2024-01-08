#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	string str;
	getline(cin,str);
	int pos=0;
	int neg=0;
	for(int i=0;i<str.length()-2;i++){
		if(str[i]==':'&&str[i+1]=='-'&&str[i+2]==')'){
			pos++;
		}
		if(str[i]==':'&&str[i+1]=='-'&&str[i+2]=='('){
			neg++;
		}
	}
	if(pos==0&&neg==0){
		cout<<"none";
	}
	else if(pos>neg){
		cout<<"happy";
	}
	else if(pos==neg){
		cout<<"unsure";
	}
	else{
		cout<<"sad";
	}
	return 0;
}
