#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int cnt=n;
	stack<char>st;
	string s;
	for(int i=0;i<n;i++){
		cin>>s;
		for(char a:s){
			if(st.empty()){
				st.push(a);
			}
			else if(a==st.top()){
				st.pop();
			}
			else{
				st.push(a);
			}
		}
		if(!st.empty()){
			cnt--;
			while(!st.empty()){
				st.pop();
			}
		}
	}
	cout<<cnt;
	return 0;
}
