class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // subtract and see if the other number is in the rest of the array?
        
        for (int i = 0; i < nums.size(); i++){
            int find = target - nums[i];
            for (int j = i+1; j< nums.size();j++){
                if (find == nums[j]) return {i,j};
            }
        }
        return {0,0};
        
    }
};
