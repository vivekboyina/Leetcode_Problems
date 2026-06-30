class Solution {
    public boolean canPlaceFlowers(int[] fb, int n) {
        if(n == 0) return true;
        for(int i = 0; i < fb.length; i++)
        {
            if(fb[i] == 0 && (i == 0 || fb[i - 1] == 0) && (i == fb.length - 1 || fb[i + 1] == 0))
            {
                fb[i] = 1;
                n-=1;
            }
            if(n == 0) return true;
        }
        return n == 0;
    }
}