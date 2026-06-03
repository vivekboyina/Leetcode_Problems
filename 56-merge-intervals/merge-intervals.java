class Solution {
    public int[][] merge(int[][] itvls) {
        Arrays.sort(itvls, (a,b) -> {
            if(a[0] != b[0]) return Integer.compare(a[0],b[0]);
            return Integer.compare(a[1],b[1]);
        });
        int a,b;
        ArrayList<ArrayList<Integer>> ans = new ArrayList<>();
        for(int i = 0; i < itvls.length; i++)
        {
            ArrayList<Integer>rw = new ArrayList<>();
            a = itvls[i][0];
            b = itvls[i][1];
            for(int j = i + 1; j < itvls.length; j++)
            {
                if(b >= itvls[j][0])
                {
                    a = Math.min(a,itvls[j][0]);
                    b = Math.max(b,itvls[j][1]);
                }
                else break;
                i = j;
            }
            rw.add(a);
            rw.add(b);
            ans.add(rw);
            System.out.println(i + " " + a + " " + b);
        }
        a = ans.size();
        b = ans.get(0).size();
        int[][] answer = new int[a][b];
        for(int i = 0; i < a; i++)
        {
            for(int j = 0; j < b; j++) answer[i][j] = ans.get(i).get(j);
        }
        return answer;
    }
}