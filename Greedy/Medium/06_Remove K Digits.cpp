class Solution {
public:
    string removeKdigits(string num, int k) {
        string str="";
        stack<char> st;
        int i=0;
        while(i<num.size()){
            while(!st.empty() && num[i]<st.top() && k>0){
                st.pop();
                k--;
            }
            if(st.empty() && num[i]=='0'){
                i++;
                continue;
            }
           st.push(num[i]);
            i++;
        }
        // cout<<st.size()<<endl;

        while(!st.empty() && k--) st.pop();

        while(!st.empty()){
            str.push_back(st.top());
            st.pop();
        }
    
        reverse(str.begin(),str.end());
        if(str=="") str+='0';
        return str;
    }
};
