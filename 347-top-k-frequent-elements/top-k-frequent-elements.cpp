class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
        }
        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > pq;

        for (auto &it : freq) {
            pq.push({it.second, it.first});
            if ((int)pq.size() > k) {
                pq.pop();
            }
        }

        vector<int> res(k);
        for (int i = k - 1; i >= 0; i--) {
            res[i] = pq.top().second;
            pq.pop();
        }

        return res;
    }
};
