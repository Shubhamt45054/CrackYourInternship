void print(string s){
        map<char,int> mp;
        for(int it:s){
            mp[it]++;
        }

        for(auto it:mp){
            if(it.second>1){
                cout<<it.first<<" - "<<it.second<<endl;
            }
        }
    }
