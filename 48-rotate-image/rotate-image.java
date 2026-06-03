class Solution {
    public void rotate(int[][] mtrx) {
        int n = mtrx.length;
        for (int i = 0; i < n / 2; i++) {
            for (int j = i; j < n - 1 - i; j++) {
                int temp = mtrx[i][j];
                mtrx[i][j] = mtrx[n - 1 - j][i];
                mtrx[n - 1 - j][i] = mtrx[n - 1 - i][n - 1 - j];
                mtrx[n - 1 - i][n - 1 - j] = mtrx[j][n - 1 - i];
                mtrx[j][n - 1 - i] = temp;
            }
        }
    }
}