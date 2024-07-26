class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int small=x+arr[i];
            int big=arr[i]-x;
            if(mp[big]>0 || mp[small]>0) return 1;
            mp[arr[i]]++;
        }
        return -1;
    }
};
