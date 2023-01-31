#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        int maxx=0,minn=INT_MAX;
        int max1=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i>0){
                maxx=max(maxx,arr[i]);
                max1=max(max1,arr[i-1]-arr[i]);
            }
            if(i<n-1){
                minn=min(minn,arr[i]);
            }
        }
        int one=maxx-arr[0], two=arr[n-1]-minn;
        int ans=max(one,two);
        ans=max(ans,max1);
        cout<<ans<<endl;
    }
    return 0;
}
