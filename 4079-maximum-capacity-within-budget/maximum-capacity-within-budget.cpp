class Solution {
public:
    int maxCapacity(vector<int>& costs, vector<int>& capacity, int budget) {
        int n = costs.size();
        vector<pair<int,int>> v(n);

        for (int i = 0; i < n; i++) {
            v[i] = {costs[i], capacity[i]};
        }

        sort(v.begin(), v.end()); // sort by cost

        int ans = 0;

        // Case 1: single machine
        for (int i = 0; i < n; i++) {
            if (v[i].first < budget) {
                ans = max(ans, v[i].second);
            }
        }

        // prefix max capacity
        vector<int> prefMax(n);
        prefMax[0] = v[0].second;
        for (int i = 1; i < n; i++) {
            prefMax[i] = max(prefMax[i-1], v[i].second);
        }

        // Case 2: two machines
        for (int i = 1; i < n; i++) {
            int remaining = budget - v[i].first - 1; // strict <
            if (remaining < 0) continue;

            int idx = upper_bound(v.begin(), v.begin() + i,
                                   make_pair(remaining, INT_MAX)) - v.begin() - 1;

            if (idx >= 0) {
                ans = max(ans, v[i].second + prefMax[idx]);
            }
        }

        return ans;
    }
};
