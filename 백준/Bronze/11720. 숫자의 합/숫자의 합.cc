#include <iostream>
#include <string>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int sum=0;
	string s;
	cin>>s;
	for(int i=0;i<n;i++){
		sum+=s[i]-'0';
	}
	cout<<sum;
	return 0;
}