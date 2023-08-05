#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	string a,b;
	cin>>a>>b;
	//max
	for(int i=0;i<a.length();i++){
		if(a[i]=='5')
			a[i]='6';
	}
	for(int i=0;i<b.length();i++){
		if(b[i]=='5')
			b[i]='6';
	}
	int ma=stoi(a);
	int mb=stoi(b);
	for(int i=0;i<a.length();i++){
		if(a[i]=='6')
			a[i]='5';
	}
	for(int i=0;i<b.length();i++){
		if(b[i]=='6')
			b[i]='5';
	}
	int na=stoi(a);
	int nb=stoi(b);
	cout<<na+nb<<" "<<ma+mb;
	return 0;
}