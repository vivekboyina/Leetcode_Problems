class Solution {
    public int maxDifference(String s) {
        int[] fr = new int[26];
        char c;
        for(int i = 0; i < s.length(); i++)
        {
            c = s.charAt(i);
            fr[c - 'a']+=1;
        }
        int od = Integer.MIN_VALUE,ev = Integer.MAX_VALUE;
        for(int i : fr)
        {
            if(i == 0) continue;
            if(i % 2 == 0) ev = Math.min(ev,i);
            else if(i % 2 != 0) od = Math.max(od,i);
        }
        return od - ev;
    }
}