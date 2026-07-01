class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        Stack<Integer> st = new Stack<>();
        HashMap<Integer,Integer> hm = new HashMap<>();
        int n1 = nums1.length,n2 = nums2.length;
        boolean fl;
        int[] ans = new int[n1];
        for(int i = n2 - 1; i >= 0; i--)
        {
            fl = false;
            if(st.isEmpty()) hm.put(nums2[i],-1);
            else
            {
                while(!st.isEmpty())
                {
                    if(nums2[st.peek()] > nums2[i])
                    {
                        fl = true;
                        hm.put(nums2[i],nums2[st.peek()]);
                        break;
                    }
                    st.pop();
                }
                if(!fl) hm.put(nums2[i],-1);
            }
            st.push(i);
        }
        for(int i = 0; i < n1; i++) ans[i] = hm.get(nums1[i]);
        return ans;
    }
}