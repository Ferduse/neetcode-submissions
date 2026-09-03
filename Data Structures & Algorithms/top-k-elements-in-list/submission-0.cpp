class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // create map to track frequency
        std::unordered_map<int,int> freq;
        // loop through nums and update freq
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        // create vector pair count, add each pair to count to sort the values 
        std::vector<pair<int,int>> count; 
        for (const auto& pair : freq) {
            count.push_back(pair);
        }
        // sort pairs by frequency (second value), descending
        sort(count.begin(), count.end(), [](pair<int,int>& a, pair<int,int>& b) {
            return a.second > b.second;
        });
        // extract the top k numbers (just the keys, not counts)
        std::vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(count[i].first);
        }
        return result;
    }
};
