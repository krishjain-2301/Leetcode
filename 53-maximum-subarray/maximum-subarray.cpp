class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsub=nums[0];
        int currentsum=0;
        for(int i=0;i<nums.size();i++){
            if(currentsum<0){
                currentsum=0;
            }
            currentsum+=nums[i];
            maxsub=max(currentsum,maxsub);
        }
        return maxsub;
    }

};