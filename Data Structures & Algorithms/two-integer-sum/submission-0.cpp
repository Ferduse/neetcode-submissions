class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> seen;
        for (int i = 0; i < nums.size(); i++) {
            int difference = target - nums[i];
            auto it = seen.find(difference);
            if(it != seen.end()) {
                return {it->second, i};
            } else {
                seen[nums[i]] = i;
            }
        } 
        return {};
    }
};