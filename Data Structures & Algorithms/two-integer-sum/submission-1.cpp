class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> check;
        vector<int> res;
        for(int i = 0; i<nums.size(); i++){
            if (check.count(target-nums[i])) {
                
                res.push_back(check[target-nums[i]]);
                res.push_back(i);
            }
            else check[nums[i]] = i;
        } return res;
    }
};
