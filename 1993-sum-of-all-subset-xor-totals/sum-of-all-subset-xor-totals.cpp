class Solution {
public:
    int solve(vector<int>& nums, int index, int xr) {
        if(index == nums.size())
            return xr;
        int take = solve(nums, index + 1, xr ^ nums[index]);
        int notTake = solve(nums, index + 1, xr);
        return take + notTake;
    }
    int subsetXORSum(vector<int>& nums) {
        return solve(nums, 0, 0);
    }
};