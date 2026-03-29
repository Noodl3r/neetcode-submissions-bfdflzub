class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char,int> counts1; 
       unordered_map<char,int> counts2; 

       if (s.length() != t.length()){
        return false;
       }

       for(int i= 0; i < s.length(); i++){
        counts1[s[i]]++;
        counts2[t[i]]++;
        }
        return counts1 == counts2;
    }
};
