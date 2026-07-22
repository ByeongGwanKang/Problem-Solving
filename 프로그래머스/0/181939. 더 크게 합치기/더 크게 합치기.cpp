#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    string s1=to_string(a);
    string s2=to_string(b);
    string temp=s1;
    string ans1=s1.append(s2);
    string ans2=s2.append(temp);
    int answer = max(stoi(ans1),stoi(ans2));
    return answer;
}