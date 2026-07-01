class Solution {
    public int maxDifference(String s) {
        HashMap<Character,Integer> hm = new HashMap<>();
        char c;
        for(int i = 0; i < s.length(); i++)
        {
            c = s.charAt(i);
            hm.put(c,hm.getOrDefault(c,0) + 1);
        }
        int od = Integer.MIN_VALUE,ev = Integer.MAX_VALUE;
        for(Map.Entry<Character,Integer> it : hm.entrySet())
        {
            if(it.getValue() % 2 == 0) ev = Math.min(ev,it.getValue());
            else od = Math.max(od,it.getValue());
        }
        return od - ev;
    }
}