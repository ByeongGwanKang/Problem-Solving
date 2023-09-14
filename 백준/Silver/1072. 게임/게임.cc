#include <iostream>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	long long x,y;
	cin>>x>>y;
	long long z=y*100/x;
	if(z>=99){
		cout<<-1;
		return 0;
	}
	int start = 0;
	int end = 1000000000;
	while(start+1<end){
		int mid = (start+end)/2;
		long long newz=(y+mid)*100/(x+mid);
		if(newz>z){
			end=mid;
		}
		else 
			start=mid;
	}
	cout<<end;
	return 0;
}