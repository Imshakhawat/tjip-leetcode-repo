
//TC: O(nlogn)
//MC: O(n)

class Solution {
public:
    static bool compare(int a,int b){
        string x=to_string(a),y=to_string(b);
     if((x+y)>(y+x))
         return true;
        else
            return false;
    }

    string largestNumber(vector<int>& nums) {
        string ans="";
        sort(nums.begin(),nums.end(),compare);
        for(int i=0;i<nums.size();i++)
            ans+=to_string(nums[i]);
           int i=0;
         
        while(i<ans.length() && ans[i]=='0') i++;
        if(i==ans.length())
        {
            return "0";
        }
        return ans;
    }
};

