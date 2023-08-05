#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	string a,b,c;
	getline(cin,a);
	getline(cin,b);
	getline(cin,c);
	int a_len=a.length();
	int c_len=c.length();
	if(b=="*"){
		cout<<1;
		for(int i=0;i<a_len+c_len-2;i++)
			cout<<0;
	}
	else{
		if(a_len>c_len){
			a[a_len-c_len]='1';
			cout<<a;
		}
		else if(a_len<c_len){
			c[c_len-a_len]='1';
			cout<<c;
		}
		else{
			a[0]='2';
			cout<<a;
		}
	}

	return 0;
}