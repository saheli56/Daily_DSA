class Solution {
public:
    char kthCharacter(int k) {
        string word = "a";
        while(word.length() < k) {
            int wordLen = word.length();
            for(int i = 0;i<wordLen;i++) {
                if(word[i] != 'z')
                    word += word[i] + 1;
                else 
                    word += 'a';
            }
        }
        return word[k-1];
    }
};
