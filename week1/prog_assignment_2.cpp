#include <bits/stdc++.h>

using namespace std;

int main()
{
  	int t; cin>>t;
  while(t--){
  	int n,m; cin>>n>>m;
    int x=n*m;
    if(x%3==0){
      cout<<x/3;
    }
    else cout<<(x/3)+1;
    if(t) cout<<endl;
      
  }

    return 0;
}
