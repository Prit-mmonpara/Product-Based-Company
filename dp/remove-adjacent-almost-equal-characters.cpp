
class Solution {
public:
  int removeAlmostEqualCharacters(string word) {
    int operations = 0;
    int n = word.length();
    
    for (int i = 0; i < n - 1;) {
      if (word[i] == word[i + 1] || abs(word[i] - word[i + 1]) == 1) {
        ++operations;
        
        // Skip the current character and its adjacent character
        i += 2;
      } else {
        ++i;
      }
    }
    
    return operations;
  }
};
