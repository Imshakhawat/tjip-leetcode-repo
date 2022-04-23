//TC: O(n)
//MC: O(n)
class Solution {
public:

	map<char, int> frequency_mapper(string s){

		map<char, int> forString;

		for (int i = 0; i < s.length(); ++i)
		{
			forString[s[i]]++;
		}

		return forString;
	}

    bool isAnagram(string s, string t) {

    	std::map<char, int> m1,m2;
    	m1=frequency_mapper(s);
    	m2= frequency_mapper(t);


    	return m1==m2;
        
    }
};


