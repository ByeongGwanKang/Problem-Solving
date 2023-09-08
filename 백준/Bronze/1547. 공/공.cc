#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int m;
	cin>>m;
	int arr[4]={0,1,0,0};
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		if(arr[a]==1){
			arr[a]=0;
			arr[b]=1;
		}
		else if(arr[b]==1){
			arr[b]=0;
			arr[a]=1;
		}
	}
	for(int i=1;i<4;i++){
		if(arr[i]==1)
			cout<<i;
	}
}