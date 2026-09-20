class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int j=candies[0];
        for(int i=0;i<candies.size();i++){
            j=max(j,candies[i]);
        }
        for(int i=0;i<candies.size();i++){
            result.push_back(candies[i]+extraCandies>=j);
        }
        return result;
    }
};