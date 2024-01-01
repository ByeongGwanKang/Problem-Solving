#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int val;
		cin>>val;
		while(val>0){
			val--;
			cout<<"=";
		}
		cout<<"\n";
	}
	return 0;
}
