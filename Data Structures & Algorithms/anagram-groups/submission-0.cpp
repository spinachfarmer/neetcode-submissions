class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // have a dict store letter to count? 

        // goes throuhg str and stores sorted letters into unorded map
        // sorted word is key and og is in the group
        unordered_map<string, vector<string>> groups;
        for (int i  = 0; i < strs.size(); i++){
            string key = strs[i];
            sort(key.begin(), key.end()); // sorts range in here
            groups[key].push_back(strs[i]);
        }
        vector<vector<string>> answer;
        // entry represents both key and vlaue pair
        for  (auto& entry : groups){
            answer.push_back(entry.second);
        }
        return answer;
    }
};
