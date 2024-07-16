
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
      long long ans=INT_MAX;
      sort(a.begin(),a.end());
      m--;
      for(int i=0;i+m<n;i++){
          ans=min(ans,a[i+m]-a[i]);
      }
      return ans;
    }   
};
