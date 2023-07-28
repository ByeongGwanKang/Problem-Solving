#include <iostream>

using namespace std;
//2 3 5 8 13
int main(void){
	int arr[15]={0,};
	arr[0]=3;
	for(int i=1;i<15;i++){
		arr[i]=arr[i-1]*2-1;
	}
	int n;
	cin>>n;
	cout<<arr[n-1]*arr[n-1];
	return 0;
}