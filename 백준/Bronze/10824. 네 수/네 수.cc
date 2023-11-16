#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	string temp1,temp2;
	temp1=a+b;
	temp2=c+d;
	cout<<stoll(temp1)+stoll(temp2);
	return 0;
}
