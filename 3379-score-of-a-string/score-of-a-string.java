class Solution {
    public int scoreOfString(String s) {
        int ans = 0;
        for(int i = 1; i < s.length(); i++) ans+=(int)(Math.abs(s.charAt(i - 1) - s.charAt(i)));
        return ans;
    }
}