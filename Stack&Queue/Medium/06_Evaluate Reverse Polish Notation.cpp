class Solution {
public:
    int evalRPN(vector<string>& tok) {
        stack<int> st;
        st.push(0);
        for(auto it:tok){

            if(it.size()==1){
                int num=it[0]-'0';
                if(num>=0 && num<=9){
                    st.push(num);
                }
                else{
                    int b=st.top();
                    st.pop();
                    int a=st.top();
                    st.pop();
                    // cout<<a<<" "<<b<<endl;
                    if(it=="+") a+=b;
                    if(it=="-") a-=b;
                    if(it=="*") a*=b;
                    if(it=="/") a/=b;
                    st.push(a);
                }
            }
            else{
                int num=stoi(it);
                // cout<<num<<endl;
                st.push(num);
            }
        }

        return st.top();
    }
};
