class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> pairs; // maps value to index
        int temp = 0;
        int size = nums.size();
        for(int i = 0; i < size; i++){
            temp = target - nums[i];
            if(pairs.find(temp)!= pairs.end()){
                return {pairs[temp],i};
            }
            pairs.insert({nums[i],i});
        }
        return{};
    }
};
