#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int h,w;
	cin>>h>>w;
	for(int i=0;i<h;i++){
		int cnt=-1;
		bool flag=false;
		string s;
		cin>>s;
		for(int j=0;j<w;j++){
			if(s[j]=='c'){
				cnt=0;
				flag=true;
			}
			cout<<cnt<<" ";
			if(flag){
				cnt++;
			}
		}
		cout<<"\n";
	}
	return 0;
}
