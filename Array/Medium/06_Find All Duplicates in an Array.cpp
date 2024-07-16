class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
            int n=nums.size();
            vector<int> ans;
            for(int i=0;i<n;i++){
                int k=abs(nums[i])-1;
                if(nums[k]<0) ans.push_back(k+1);
                nums[k]=-nums[k];
            }
            return ans;
    }
};
