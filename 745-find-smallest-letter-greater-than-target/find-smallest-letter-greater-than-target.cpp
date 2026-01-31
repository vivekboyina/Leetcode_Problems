class Solution {
public:
    char nextGreatestLetter(vector<char>& lt, char t) {
        for(char i : lt) if(i > t) return i;
        return lt[0];
    }
};