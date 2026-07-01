class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        Stack<Integer> st = new Stack<>();
        HashMap<Integer,Integer> hm = new HashMap<>();
        int n1 = nums1.length,n2 = nums2.length;
        int[] ans = new int[n1];
        for(int i = n2 - 1; i >= 0; i--)
        {
            if(st.isEmpty()) hm.put(nums2[i],-1);
            else
            {
                while(!st.isEmpty() && nums2[st.peek()] <= nums2[i]) st.pop();
                hm.put(nums2[i],st.isEmpty() ? -1 : nums2[st.peek()]);     
            }
            st.push(i);
        }
        for(int i = 0; i < n1; i++) ans[i] = hm.get(nums1[i]);
        return ans;
    }
}