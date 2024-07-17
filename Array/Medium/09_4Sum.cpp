class Solution {
public:
     vector<vector<int>> ans;

    void threeSum(vector<int>& arr,int a,int tar,int s) {
        // sort(arr.begin(),arr.end());
        int n=arr.size(); 
        s++;
        for(int i=s;i<n-2;i++){
            if(i!=s && arr[i]==arr[i-1]) continue;
            int b=arr[i];
            if(tar>0 && a+b>tar) break;
            int j=i+1;
            int k=n-1;
            map<int,int> mp;

            while(j<k){
                int c=arr[j];
                int d=arr[k];
                long long sum=0;
                sum+=(0LL+a+b+c+d);
                // cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
                if( (sum)==tar*1LL && mp[c]==0){
                    mp[c]++;
                    ans.push_back({a,b,c,d});
                    j++;
                    k--;
                }
                else if((sum)>tar) k--;
                else j++;
            }
        }
        // return ans;
    }

    vector<vector<int>> fourSum(vector<int>& nums, int tar) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i!=0 && nums[i]==nums[i-1]) continue;
            if(tar>0 && nums[i]>tar) break;
            threeSum(nums,nums[i],tar,i);
        }
        return ans;
    }
};
