class Solution {
public:
    int countnegativeRow(vector<int>& row){
     int left=0;
     int right=row.size()-1;
     
     while(left<=right){
     int mid=left+(right-left)/2;
     if(row[mid]<0){
        right=mid-1;
     }
     else{
        left=mid+1;
     }
     }
     return row.size()-left;
    }

    int countNegatives(vector<vector<int>>& grid) {
       int count=0;
       for(int i=0;i<grid.size();i++){
        count=count+countnegativeRow(grid[i]);
       }
         return count;
    }
};
int countNegatives(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    int row = m - 1, col = 0;
    int count = 0;

    while (row >= 0 && col < n) {
        if (grid[row][col] < 0) {
            count += (n - col);
            row--;
        } else {
            col++;
        }
    }
    return count;
}
