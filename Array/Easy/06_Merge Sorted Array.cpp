class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=n+m-1;
        int a=m-1;
        int b=n-1;
        while(a>=0 && b>=0){
            if(nums2[b]>=nums1[a]){
                nums1[i]=nums2[b];
                b--;
            }
            else{
                nums1[i]=nums1[a];
                a--;
            }
            i--;
        }
        while(a>=0){
            nums1[i]=nums1[a];
                a--;
                i--;
        }
        while(b>=0){
            nums1[i]=nums2[b];
                b--;
                i--;
        }
    }
};
