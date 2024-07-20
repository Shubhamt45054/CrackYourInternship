class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str="";
        string ss=strs[0];
        int n=strs.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            int k=strs[i].size();
            mini=min(mini,k);
        }

        for(int i=0;i<n;i++){
            string kk=strs[i];
            int g=ss.size();
           cout<<ss<<" "<<kk<<endl;
            for( int j=0 ; j < min(mini,g) ; j++ ){
                if(ss[j]!=kk[j]) break;
                str+=ss[j];
            }
            ss=str;
            str="";
        }
        return ss;
    }
};
