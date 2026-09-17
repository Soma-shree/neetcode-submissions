class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        for(string s: strs){
            int freq[26] = {0};
            for(char c: s){
                freq[c-'a']++;
            }
            string key = "";
            
            for(int i=0; i<26; i++){
                key += to_string(freq[i]);
                key += "#";
            }
            mp[key].push_back(s);
        }
        for(auto x: mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};
