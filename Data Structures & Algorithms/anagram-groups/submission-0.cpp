class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> groups;
        for (const string& str : strs) {
            std::string s = str;
            std::sort(s.begin(), s.end());
            groups[s].push_back(str);
        }
        vector<vector<string>> result;
        for (const auto& pair : groups) {
            result.push_back(pair.second);
        }
        return result;
    }
};
