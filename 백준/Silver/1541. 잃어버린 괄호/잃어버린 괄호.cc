#include <bits/stdc++.h> 
using namespace std;

vector<string> split(string str, char delimiter);

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	string str;
	cin>>str;
	int ans=0;
	int check=0;
	vector<string> v=split(str,'-');
	for(string i:v){
		vector<string> temp = split(i,'+');
		for(string j:temp){
			if(check!=0){
				ans-=stoi(j);
			}
			else {
				ans+=stoi(j);
			}
		}
		check++;	
	}
	cout<<ans;
}

vector<string> split(string input, char delimiter) {
    vector<string> answer;
    stringstream ss(input);
    string temp;
 
    while (getline(ss, temp, delimiter)) {
        answer.push_back(temp);
    }
 
    return answer;
}