class Solution {
public:
    string addBinary(string a, string b) {
        int n=a.size()-1;
        int m=b.size()-1;
        string ans="";
        int carry=0;

        while(n>=0 || m>=0){
            int g=0;
            if(n>=0)
            g=a[n]-'0';
           
            int h=0;
            if(m>=0)
            h=b[m]-'0';

            int x=g+h+carry;
            int r=x%2;
            if(r==0){
                ans+='0';
            }
            else{
                ans+='1';
            }
            if(x>1) carry=1;
            else carry=0;
            
            n--;
            m--;
        }
       
        if(carry==1) ans+='1';

        reverse(ans.begin(),ans.end());
        return ans;
    }
};
