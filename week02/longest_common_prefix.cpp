
//TC: O(m*n)
//MC: O(n)

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    	string ans = "";
    	if(strs.size() == 0) return "";

    	string key_string= *min_element(strs.begin(),strs.end());

    	for (int i = 0; i < key_string.size(); ++i)
    	{
    		for (int j = 0; j < strs.size() ; ++j)
    		{
    			if(key_string[i]!=strs[j][i])return ans;
    		}
    		ans.push_back(key_string[i]);
    	}

    	return ans;
        
    }
};

