class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        int n=s.size();
        int cnt=1;
        for(int i=0;i<n;i++){
            if(st.empty()){
                st.push({s[i],cnt});
                continue;
            }

            if(st.top().first==s[i]){
                cnt=st.top().second+1;
                st.push({s[i],cnt});
                if(cnt==k){
                    while(cnt--){
                        st.pop();
                    }
                    cnt=1;
                }
            }
            else{
                cnt=1;
                 st.push({s[i],cnt});
            }
        }
        string ans="";

        while(!st.empty()){
            ans+=st.top().first;
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
