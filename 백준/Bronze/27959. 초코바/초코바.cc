#include <iostream>
#include <string>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin>>n>>m;
	if(n*100>=m){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	return 0;
}