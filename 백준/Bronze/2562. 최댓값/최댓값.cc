#include <iostream>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int max=0;
	int idx;
	for(int i=1;i<=9;i++){
		int val;
		cin>>val;
		if(val>max){
			max=val;
			idx=i;
		}
	}
	cout<<max<<"\n"<<idx;
	return 0;
}