class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        stack<string> st;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ') continue;
            string temp;
            while(i<s.size() && s[i]!=' '){
                temp+=s[i];
                i++;
            }
            st.push(temp);
        }
        ans=st.top();
        st.pop();
        // cout<<ans<<endl;
        while(!st.empty()){
            ans+=' '+st.top();
            st.pop();
        }
        return ans;
    }
};
