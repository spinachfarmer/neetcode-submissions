class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0 , m = 0;
        int r = nums.size() - 1;

        while(l <= r){ // want to split the list in half and then check 
             m = l + ((r-l)/2); //finds the middle 

            if(nums[m] > target){
                r = m - 1;  // if the middle num is greater than target want to only check below
            }
            else if (nums[m] < target) l = m + 1;
            else return m; // returns position where target is
        }
        return -1;
        
    }
};
