#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	vector<int>science(4);
	vector<int>society(2);
	cin>>science[0]>>science[1]>>science[2]>>science[3];
	cin>>society[0]>>society[1];
	sort(science.begin(), science.end(),greater<int>());
	sort(society.begin(), society.end(),greater<int>());
	cout<<science[0]+science[1]+science[2]+society[0];
    return 0;
}
