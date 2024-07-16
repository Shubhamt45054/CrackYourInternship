class Solution {
public:
    void sortColors(vector<int>& nums) {
        int k=0;
        int f=nums.size()-1;
        int i=0;
        while(i<=f){
            if(nums[i]==0){
                swap(nums[k],nums[i]);
                k++;
                i++;
            }
            else if(nums[i]==2){      
                swap(nums[f],nums[i]);
                f--;
            }
            else i++;
        }
    }
};
