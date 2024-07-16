class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int n=arr.size();
        int slow=0;
        int fast=0;

        while(true){
            slow=arr[slow];
            fast=arr[arr[fast]];
            if(slow==fast)  break;
        };

        fast=0;
        while(slow!=fast){
            slow=arr[slow];
            fast=arr[fast];
            if(slow==fast) return fast;
        }
        return 0;
        
    }
};
