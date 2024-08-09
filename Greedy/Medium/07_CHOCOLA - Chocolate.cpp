#include <bits/stdc++.h>
using namespace std;

signed main() {

ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
 while(t--){     
    int x,y;
    cin>>x>>y;
    priority_queue<pair<int,int>> pq;
    while(x!=1){
        int a;
        cin>>a;
        pq.push({a,0});
        x--;
    }
    while(y!=1){
        int a;
        cin>>a;
        pq.push({a,1});
        y--;
    }
    int hor=1;
    int ver=1;
    int ans=0;
    while(!pq.empty()){
        auto it=pq.top();
        int val=it.first;
        int type=it.second;
        if(type==0){
            ans+=(val*hor);
            ver++;
        }
        else{
            ans+=(val*ver);
            hor++;
        }
        pq.pop();
    }
    cout<<ans<<endl;

}

}

