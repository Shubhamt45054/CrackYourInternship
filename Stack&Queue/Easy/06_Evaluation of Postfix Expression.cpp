 int evaluatePostfix(string S)
    {
        stack<int> st;
        for(auto it:S){
            int a=it-'0';
            if(a>=0 && a<=9){
                st.push(a);
            }
            else{
                int b=st.top();
                st.pop();
                int a=st.top();
                st.pop();
                if(it=='+') a+=b;
                if(it=='-') a-=b;
                if(it=='/') a/=b;
                if(it=='*') a*=b;
                
                st.push(a);
            }
            
        }
        return st.top();
    }
