class Solution {
public:
    string create_key(string s){
        vector<int> key(26,0);
        string string_key="";
        // cout << "c"-"a";
        for (char c: s) key[(((int)c)-((int)'a'))]++;
        for (int count :key) string_key+=count;
        return string_key;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        vector<string> keys;
        unordered_map<string,vector<string>> memo;
        for (string str: strs){
            string key = create_key(str);
            if(!memo.count(key)){
                memo[key] = {str};
                keys.push_back(key);                
            } else memo[key].push_back(str);
        } for (string key : keys) res.push_back(memo[key]);
        return res;
    }
};
