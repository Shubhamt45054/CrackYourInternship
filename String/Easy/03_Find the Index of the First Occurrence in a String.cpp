class Solution {
public:
    int strStr(string hay, string need) {
        int n=hay.size();
        int m=need.size();
        int i=0;
        while((i+m)<=n){
            if(hay[i]==need[0]){
               string str=hay.substr(i,m);
               if(str==need) return i;
            }
            i++;
        }

        return -1;
    }
};
