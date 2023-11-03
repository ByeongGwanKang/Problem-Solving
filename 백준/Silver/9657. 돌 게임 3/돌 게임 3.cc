#include <bits/stdc++.h>
using namespace std;


int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int v[1001]={0,};
	//상근이가 이기면 1, 창영이가 이기면 2
	v[1]=1;
	v[2]=2;
	v[3]=1;
	v[4]=1;
	for(int i=5;i<=1000;i++){
		if(v[i-1]==1&&v[i-3]==1&&v[i-4]==1){
			v[i]=2;
		}
		else {
			v[i]=1;
		}
	}
	if(v[n]==1){
		cout<<"SK";
	}
	else if(v[n]==2){
		cout<<"CY";
	}
	return 0;
}
