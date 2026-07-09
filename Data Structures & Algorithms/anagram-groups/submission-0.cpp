class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>>ans;

        for(string str : strs){
            vector<int> freq(26,0);

            for(char c : str)
                freq[c-'a']++;

            string key;

            for(int x : freq)
            {
                key += to_string(x);
                key += '#';
            }

            mp[key].push_back(str);
        }

        for(auto pair:mp){
            ans.push_back(pair.second);
        }

        return ans;

    }
};
