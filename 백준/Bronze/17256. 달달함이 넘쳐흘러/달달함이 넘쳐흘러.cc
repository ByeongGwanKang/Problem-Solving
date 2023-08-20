#include <bits/stdc++.h> 
using namespace std;

typedef pair<int,int> node;
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int ax,ay,az,cx,cy,cz;
	cin>>ax>>ay>>az>>cx>>cy>>cz;
	cout<<cx-az<<" "<<cy/ay<<" "<<cz-ax;
	return 0;
}
