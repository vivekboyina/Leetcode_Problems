class Solution {
    public void mer(int[] vc, int l, int m, int h) {
        int n1 = m - l + 1;
        int n2 = h - m;
        int[] a = new int[n1];
        int[] b = new int[n2];
        for (int i = 0; i < n1; i++) a[i] = vc[l + i];
        for (int i = 0; i < n2; i++) b[i] = vc[m + 1 + i];
        int i = 0, j = 0, k = l;
        while (i < n1 && j < n2) {
            if (a[i] < b[j]) {
                vc[k++] = a[i++];
            } else {
                vc[k++] = b[j++];
            }
        }
        while (i < n1) vc[k++] = a[i++];
        while (j < n2) vc[k++] = b[j++];
    }
    public void mergesort(int[] vc, int l, int h) {
        if (l >= h) return;
        int m = (l + h) / 2;
        mergesort(vc, l, m);
        mergesort(vc, m + 1, h);
        mer(vc, l, m, h);
    }
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int[] vc = new int[m + n];
        for (int i = 0; i < m; i++) vc[i] = nums1[i];
        for (int i = 0; i < n; i++) vc[m + i] = nums2[i];
        mergesort(vc, 0, m + n - 1);
        System.arraycopy(vc, 0, nums1, 0, m + n);
    }
}