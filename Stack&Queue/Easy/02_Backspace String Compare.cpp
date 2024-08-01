class Solution {
public:
    string change(string str){
        stack<char> st;
        for(auto it:str){
            if(it=='#'){
                if(!st.empty()) st.pop();
            }
            else
            st.push(it);
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
    bool backspaceCompare(string s, string t) {
        s=change(s);
        t=change(t);
        return s==t;
    }
};
