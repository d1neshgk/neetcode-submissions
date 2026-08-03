class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, bool> check;
        for(int num : nums){
            if (check.contains(num)) return true;
            check[num] = true;
        } return false;
    }
};