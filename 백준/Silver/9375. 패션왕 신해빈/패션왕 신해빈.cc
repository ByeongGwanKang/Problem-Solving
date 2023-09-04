#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		map<string,int>m;
		int n;
		cin>>n;
		string a,b;
		for(int j=0;j<n;j++){
			cin>>a>>b;
			if(m.find(b)==m.end()){
				m.insert(make_pair(b,2));
			}
			else 
				m[b]++;
		}
		int ans=1;
		for (auto iter = m.begin() ; iter !=  m.end(); iter++){
			ans*=iter->second;
		}
		cout<<ans-1<<"\n";
	}
}