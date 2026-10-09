class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currentmin=1;
        int currentmax=1;
        int res=*max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int temp=currentmax*nums[i];
            currentmax=max({nums[i]*currentmax,nums[i]*currentmin,nums[i]});
            currentmin=min({temp,nums[i]*currentmin,nums[i]});
            res=max(res,currentmax);
        }
        return res;
    }
};