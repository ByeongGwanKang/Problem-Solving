#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n,b;
	string str;
	cin>>n>>b;
	int temp;
	while(n>0){
		if(n%b>9){
			temp = (n%b)-10+'A';
			str+=temp;
		}
		else str+=((n%b)+'0');
		n/=b;
	}
	reverse(str.begin(),str.end());
	cout<<str;
	return 0;
}