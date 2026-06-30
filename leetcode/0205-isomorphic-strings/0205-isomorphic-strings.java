class Solution {
    public boolean isIsomorphic(String s, String t) {
        int[] ss = new int[256];
        int[] tt = new int[256];
        char a,b;
        for(int i = 0; i < s.length(); i++)
        {
            a = s.charAt(i);
            b = t.charAt(i);
            if(ss[a] != tt[b]) return false;
            ss[a] = i + 1;
            tt[b] = i + 1;
        }
        return true;
    }
}