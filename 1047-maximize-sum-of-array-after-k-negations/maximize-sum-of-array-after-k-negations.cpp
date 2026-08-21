class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size() & k>0;i++){
            if(nums[i]<0){
                nums[i]=-nums[i];
                k--;
            }
        }
        if(k%2==1){
            int minindex=0;
            for(int i=1;i<nums.size();i++){
                if(nums[i]<nums[minindex]){
                    minindex=i;
                }
            }
            nums[minindex]=-nums[minindex];
        }
        int sum=0;
        for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        }
        return sum;
    }
};