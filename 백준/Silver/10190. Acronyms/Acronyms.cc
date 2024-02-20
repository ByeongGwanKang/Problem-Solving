#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		string acr;
		int n;
		cin>>acr>>n;
		cin.ignore();
		cout<<acr<<"\n";
		for(int j=0;j<n;j++){
			string s;
			getline(cin,s);
			int cnt=0;
			bool flag=true;
			bool nextcheck=true;
			for(int k=0;k<s.length();k++){
				if(s[k]==' '){
					nextcheck=true;
				}
				if(nextcheck==true&&s[k]>='A'&&s[k]<='Z'){
					nextcheck=false;
					if(cnt>=acr.length()){
						flag=false;
						break;
					}
					if(s[k]==acr[cnt]){
						cnt++;
					}
					else{
						flag=false;
						break;
					}
				}
			}
			if(flag){
				cout<<s<<"\n";
			}
		}
	}
	return 0;
}