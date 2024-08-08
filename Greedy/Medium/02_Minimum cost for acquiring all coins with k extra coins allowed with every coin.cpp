	int MinCoin(vector<int>nums, int tar)
	{
	    vector<int> dp(tar+1,1e9);
	    dp[0]=0;
	    for(int i=1;i<=tar;i++){
	        for(int j=0;j<nums.size();j++){
	            if(i-nums[j]>=0)
	            dp[i]=min(dp[i],1+dp[i-nums[j]]);
	        }
	    }
	    if(dp[tar]==1e9) return -1;
	    return dp[tar];
	}
