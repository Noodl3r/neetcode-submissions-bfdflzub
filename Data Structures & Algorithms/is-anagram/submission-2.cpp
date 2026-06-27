class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26] = {0};
        for(char letter : s){
            arr[letter - 'a']++;
        }
        for(char letter : t){
            arr[letter - 'a']--;
        }

        for(int n : arr){
            if (n != 0){
                return false;
            }
        }
        return true;
    }
};
