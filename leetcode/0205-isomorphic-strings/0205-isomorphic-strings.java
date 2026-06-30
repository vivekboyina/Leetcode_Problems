class Solution {
    public boolean isIsomorphic(String s, String t) {
        HashMap<Character,Long> hm1 = new HashMap<>();
        HashMap<Character,Long> hm2 = new HashMap<>();
        HashMap<Character,Character> chk = new HashMap<>();
        for(int i = 0; i < s.length(); i++)
        {
            hm1.put(s.charAt(i),hm1.getOrDefault(s.charAt(i),0L) + 1);
            hm2.put(t.charAt(i),hm2.getOrDefault(t.charAt(i),0L) + 1);
            if(hm1.get(s.charAt(i)).equals(hm2.get(t.charAt(i))))
            {
                if(chk.containsKey(s.charAt(i)) && chk.get(s.charAt(i)) != t.charAt(i)) return false;
                else chk.put(s.charAt(i),t.charAt(i));
            }
            else return false;
        }
        return true;
    }
}