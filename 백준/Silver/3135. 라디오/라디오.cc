#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int a,b;
	cin>>a>>b;
	int n;
	cin>>n;
	int minval=abs(a-b);
	for(int i=0;i<n;i++){
		int val;
		cin>>val;
		int temp=abs(b-val);
		minval=min(minval,temp);
	}
	if(minval==abs(a-b)){
		cout<<minval;
	}
	else{
	cout<<minval+1;
	}
	return 0;
}