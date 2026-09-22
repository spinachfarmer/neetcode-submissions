class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_map <int, int> temp; // want to map index to value
        int size = nums.size();

        for(int i = 0; i < size; i++){
            if(temp.find(nums[i])!= temp.end()) return true;
            temp.insert({nums[i], i});
        }
        return false;

       /* for (int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if (nums[i] == nums[j])return true;
            }
        }
        return false;
    */

    }
};
