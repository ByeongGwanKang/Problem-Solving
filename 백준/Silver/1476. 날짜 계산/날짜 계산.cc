#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int e,s,m;
	cin>>e>>s>>m;
	int a=1,b=1,c=1;
	long long ans=1;
	while(a!=e||b!=s||c!=m){
		a++;
		b++;
		c++;
		ans++;
		if(a==16){
			a=1;
		}
		if(b==29){
			b=1;
		}
		if(c==20){
			c=1;
		}
	}
	cout<<ans;
	return 0;
}
