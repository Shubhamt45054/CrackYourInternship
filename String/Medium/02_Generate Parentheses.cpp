class Solution {
public:
    vector<string> ans;

    void solve(string str,int open,int close,vector<string>& ans){
        //  cout<<str<<" "<<open<<" "<<close<<endl;
        
        if(close==0 && open==0){
            ans.push_back(str);
        }
            if(open>0){
                solve(str+'(',open-1,close,ans);
            }
            if(close>open){
                 solve(str+')',open,close-1,ans);
            }

    }
    vector<string> generateParenthesis(int n) {
        string str="";
        vector<string> ans;
        solve(str,n,n,ans);
        return ans;
    }
};
