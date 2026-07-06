class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<int> ans;
        for (int num: nums) {
            freq[num]++;
        }

        int n = nums.size();
        vector<vector<int>> bucket(n+1);

        for(auto &it: freq) {
            bucket[it.second].push_back(it.first);
        }

        for (int i=n; i>=1; i--) {
            for (int num: bucket[i]) {
                if (ans.size()==k)
                    break;
                ans.push_back(num);
            }
            if (ans.size()==k)
                break;
        }
        return ans;
    }
};
