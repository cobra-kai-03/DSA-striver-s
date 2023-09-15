bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++)
        {
            if(mat[i][0]<=target && mat[i][m-1]>=target)
            {
                return binary_search(mat[i].begin(),mat[i].end(),target);
            }
        }
        return false;
}
