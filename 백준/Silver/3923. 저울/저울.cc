#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  while(true) {
    int a,b,d;
    cin>>a>>b>>d;
    if(a==0&&b==0&&d==0) {
      break;
    }
    int ans_cnt=INT_MAX;
    int mnsum=INT_MAX;
    pair<int,int>ans= {-1,-1};
    for(int  i = -50000; i <= 50000; i++) {
      int tmp=d-a*i;
      if(tmp%b==0) {
        int y=abs(tmp/b);
        int x=abs(i);
        if(ans_cnt>x+y) {
          ans_cnt=x+y;
          ans.first=x;
          ans.second=y;
        }
        if(ans_cnt==x+y&&mnsum>a*x+b*y) {
          mnsum=a*x+b*y;
          ans.first=x;
          ans.second=y;
        }
      }
    }
    cout<<ans.first<<" "<<ans.second<<"\n";
  }
  return 0;
}