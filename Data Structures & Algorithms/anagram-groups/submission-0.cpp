class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>>map;

       for (string str: strs) {
        vector<int>chars(26,0);
        for (char c: str) chars[c-'a']++;
        string key = "";
        for (int i=0; i<26; i++) key += "#" + to_string(chars[i]);
        map[key].push_back(str);
       } 

       vector<vector<string>>ans;

       for (auto &it: map) {
        ans.push_back(it.second);
       }
       return ans;
    }
};
