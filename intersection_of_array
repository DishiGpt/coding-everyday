class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> count;
        vector<int> res;

        for (int num : nums1) {
            count[num]++;
        }

        for (int num : nums2) {
            if (count[num] > 0) {
                res.push_back(num);
                count[num]--;
            }
        }

        return res;
    }
};
