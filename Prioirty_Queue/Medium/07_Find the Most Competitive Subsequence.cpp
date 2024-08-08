class Solution {
public:
    vector<int> mostCompetitive(vector<int>& num, int k) {
        int n=num.size();
        vector<int> ans(k,0);
        k=n-k;
        stack<int> st;
        for(int i=0;i<n;i++){
           while(!st.empty() && num[i]<st.top() && k>0){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(!st.empty() && k--) st.pop();
        k=st.size()-1;
        // cout<<k<<endl;
        while(!st.empty()){
            ans[k]=st.top();
            st.pop();
            k--;
        }
        return ans;
    }
};
