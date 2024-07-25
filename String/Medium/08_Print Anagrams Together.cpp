class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& str) {
         vector<string> temp=str;
        int n=str.size();
        map<string,int> mp;
        for(int i=0;i<n;i++){
            sort(temp[i].begin(),temp[i].end());
            mp[temp[i]]++;
        }
        int k=mp.size();
        // cout<<k<<endl;
        vector<vector<string>> ans(k);

        map<string,int> index;
        int j=1;
        for(int i=0;i<n;i++){
            if(index[temp[i]]==0){
                index[temp[i]]=j;
                j++;
            }
            
            int idx=index[temp[i]]-1;
            ans[idx].push_back(str[i]);
        }


        return ans;
    }
};
