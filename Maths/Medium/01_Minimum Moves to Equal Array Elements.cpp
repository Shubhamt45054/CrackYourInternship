class Solution {
public:
    int minMoves(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int mini=arr[0];
        int total=0;
        for(int i=0;i<n;i++){
            total+=(arr[i]-mini);
        }
        return total;
    }
};
