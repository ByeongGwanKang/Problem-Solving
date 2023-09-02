#include <bits/stdc++.h> 
using namespace std;

int n;
int blue=0;
int white=0;
static vector<vector<int>>v;

void func(int x, int y, int size){
	int bcnt=0;
	int wcnt=0;
	for(int i=x;i<x+size;i++){
		for(int j=y;j<y+size;j++){
			if(v[i][j]==0)
				wcnt++;
			else
				bcnt++;
		}
	}
	if(wcnt==0){
		blue++;
	}
	else if(bcnt==0){
		white++;
	}
	else{
		func(x,y,size/2);
		func(x+size/2,y,size/2);
		func(x,y+size/2,size/2);
		func(x+size/2,y+size/2,size/2);
	}
}
	
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n;
	v=vector<vector<int>>(n,vector<int>(n));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		cin>>v[i][j];
		}
	}
	func(0,0,n);
	cout<<white<<"\n";
	cout<<blue;
}
