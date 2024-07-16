class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<vector<int>> ans;
        for(int i=0;i<n-2;i++){
            if(i!=0 && arr[i]==arr[i-1]) continue;
            int a=arr[i];
            int j=i+1;
            int k=n-1;
            map<int,int> mp;
            while(j<k){
                int b=arr[j];
                int c=arr[k];
                if((b+c+a)==0 && mp[b]==0){
                    mp[b]++;
                    ans.push_back({a,b,c});
                    j++;
                    k--;
                }
                else if((a+b+c)>0) k--;
                else j++;
            }
        }
        return ans;
    }
};
