//TC: O(n) [n= length of string]
//MC: O(n) [n= length of string]
// if my calculation is wrong plz let me know

class Solution
{
public:
  bool isValid(string s)
  {

    stack<char> box;
    bool flag = true;

    map<char, char> braces;

    braces[')'] = '(';
    braces['}'] = '{';
    braces[']'] = '[';

    for (int i = 0; i < s.length(); ++i)
    {
      if (braces.count(s[i]) && !box.empty())
      {
        if ((braces[s[i]] == box.top()) )
        {
          box.pop();
          continue;
        }
      }

      box.push(s[i]);
    }

    flag = box.empty() ?  true :  false;
    return flag;
  }
};
