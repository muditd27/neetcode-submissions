class Solution {
public:
    vector<int> l;
    string encoded="";
    string decoded="";
    vector<string> ans;
    string encode(vector<string>& strs) {
        for(int i=0;i<strs.size();i++){
            l.push_back(strs[i].length());
            int g=strs[i].length();

            for(int h=0;h<g;h++){
                encoded+=strs[i][h];
            }
        }

        return encoded;

    }

    vector<string> decode(string s) {
        int pos=0;
        for(int i=0;i<l.size();i++){
            int n=l[i];
            for(int j=0;j<n;j++){
                decoded+=s[pos+j];
            }
            ans.push_back(decoded);
            decoded="";
            pos+=n;
        }
        return ans;
    }
};
