class Solution {
    public List<List<Integer>> generate(int nr) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> row = new ArrayList<>();
        for(int i = 1; i <= nr; i++)
        {
            row.add(1);
            if(i > 2)
            {
                for(int j = 1; j < i - 1; j++) row.add(ans.get(i - 2).get(j) + ans.get(i - 2).get(j - 1));
            }
            if(i > 1) row.add(1);
            ans.add(new ArrayList<>(row));
            row = new ArrayList<>();
        }
        return ans;
    }
}