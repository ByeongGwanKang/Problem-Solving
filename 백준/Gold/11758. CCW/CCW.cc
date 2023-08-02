#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	int temp = (c-a)*(f-b)-(d-b)*(e-a);
	if(temp ==0)
		cout<<0;
	else if(temp>0)
		cout<<1;
	else cout<<-1;
	return 0;
}