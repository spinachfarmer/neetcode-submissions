class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     

        unordered_map<int, int> count;
        for(int num:nums){ // iteratees through nums and then counts how many occuraces of each number there are
            count[num]++;
        }

        vector<pair<int, int>> arr;
        for (const auto&p : count){ // same as for (auto it = count.begin() it!= count.ed(); it++)
            arr.push_back({p.second,p.first}); // frequency, number (it->second )p.second is the key, p.first is the value
        }
        // rbegin & rrend revers iterator
        sort(arr.rbegin(), arr.rend()); // difficult to sort hashmap so hashmap is put into vector

        vector<int> res;
        for ( int i = 0; i < k ; i++){
            res.push_back(arr[i].second);
        }
        return res;
    }
      
};
