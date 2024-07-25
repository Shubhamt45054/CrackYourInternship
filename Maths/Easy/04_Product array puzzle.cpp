class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& arr, int n) {
       vector<long long int> prfix(n+1,1);
       vector<long long int> suffix(n+1,1);
       for(int i=0;i<n;i++){
           prfix[(i+1)]=prfix[i]*arr[i];
       }
       for(int i=n-1;i>=0;i--){
           suffix[(i)]=suffix[i+1]*arr[i];
       }
       vector<long long int> ans(n,0);
       for(int i=0;i<n;i++){
        //   cout<<prfix[i+1]<<" "<<suffix[i+1]<<endl;
           ans[i]=prfix[i]*suffix[i+1];
       }
       return ans;
    }
};
