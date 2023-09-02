#include <bits/stdc++.h> 
using namespace std;

int n,r,c;
int ans=0;
void zfunc(int x,int y, int size){
	if(x==c&&y==r){
		cout<<ans;
		return ;
	}
	else if(c>=x&&r>=y&&c<x+size&&r<y+size){
		zfunc(x,y,size/2);
		zfunc(x+size/2,y,size/2);
		zfunc(x,y+size/2,size/2);
		zfunc(x+size/2,y+size/2,size/2);
	}
	else ans+=size*size;
}
	
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>r>>c;
	zfunc(0,0,pow(2,n));
}
