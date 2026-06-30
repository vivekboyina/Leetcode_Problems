class Solution {
    public boolean canPlaceFlowers(int[] fb, int n) {
        int ans = 0;
        for(int i = 0; i < fb.length; i++)
        {
            if(fb.length > 1 && fb[i] == 0)
            {
                if((i == 0 && fb[i + 1] == 0) || (i == fb.length - 1 && fb[i - 1] == 0) || (i > 0 && i < fb.length - 1 && fb[i - 1] == 0 && fb[i + 1] == 0))
                {
                    fb[i] = 1;
                    ans+=1;
                }
            }
            else if(fb[i] == 0) ans+=1;
        }
        return ans >= n;
    }
}