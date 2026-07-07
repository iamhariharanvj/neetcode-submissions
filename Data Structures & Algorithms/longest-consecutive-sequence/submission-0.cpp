class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if( nums.empty()) return 0;
        unordered_set<int>s(nums.begin(), nums.end());
        int ans = 1;

        for (int num: nums) {
            if (!s.count(num-1)) {
                int count = 1;
                while(s.count(++num)) count++;
                ans = max(ans, count);
            }
        }
        return ans;
    }
};
