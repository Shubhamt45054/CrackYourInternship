class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        map<int,int> mp;
        vector<int> great(n,0);
        stack<int> st;

        for(int i=n-1;i>=0;i--){

            while(!st.empty() && nums2[i]>st.top()) st.pop();
            if(st.empty()) mp[nums2[i]]=-1;
            else mp[nums2[i]]=st.top();

            st.push(nums2[i]);
        }
       
        vector<int> ans;
        for(auto it:nums1){
            ans.push_back(mp[it]);
        }
        return ans;

    }
};
