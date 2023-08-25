#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	cin.ignore();
	string str;
	for(int i=0;i<n;i++){
		getline(cin,str);
		int len=str.length();
		if(len>9||len<6){
			cout<<"no\n";
		}
		else cout<<"yes\n";
	}
}
