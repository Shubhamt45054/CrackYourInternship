class Solution {
public:
    int maximumProduct(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
        sort(arr.begin(),arr.end());
        int a=(arr[0]*arr[1]*arr[n-1]);
        int b=(arr[n-1]*arr[n-2]*arr[n-3]);
        return max(a,b);
    }
};
