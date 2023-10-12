#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int i=0;
	while(true){
		i++;
		int ans=0;
		int l,p,v;
		cin>>l>>p>>v;
		if(l==0&&p==0&&v==0){
			return 0;
		}
		if(v/p>0){
			ans+=(v/p)*l;
			v%=p;
		}
		ans+=min(v,l);
		cout<<"Case "<<i<<": "<<ans<<"\n";
	}
	return 0;
}