class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> check;
        int count=0;
        if (s.length() != t.length()) return false;
        for(char c : s){
            if(check.count(c)) check[c]++;
            else {
                check[c] = 1;
                count++;
            }
        } for(char c : t){
            if(check.count(c)) check[c]--;
            else return false;
            if (!check[c]) count--;
        } return count ? false: true;
    }
};
