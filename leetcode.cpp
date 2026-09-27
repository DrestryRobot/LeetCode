#include <string>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {

public:

    vector<vector<string>> getGroup(vector<string>& strs)
    {
        unordered_map<string, vector<string>> mp;

        for(string& s : strs)
        {
            string key = s;
            sort(key.begin(), key.end());
            mp[key].push_back(s);
        }
        
        vector<vector<string>> result;
        
        for(auto& [key, value] : mp)
        {
            result.push_back(value);
        }
        
        return result;
    }
};

int main()
{
    Solution sol;

    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> out = sol.getGroup(strs);
    
    for(auto& ss : out)
    {
        cout << "[";
        for(auto& s : ss)
        {
            cout << s << ",";
        }
        cout << "]" << endl;
    }

    return 0;
}