class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> k;

        for(char c: s)
            k[c]++;
        for(char c:t)
            k[c]--;

        for(auto p:k){
            if(p.second!=0)
                return false;
        }
        return true;
    }
};
