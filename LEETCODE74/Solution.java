package LEETCODE74;

class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        if(matrix.length==0)
            return false;
        int i=0,j=matrix[0].length-1;
        while(j>=0&&i<matrix.length){
            if(matrix[i][j]==target){
                return true;
            }else if(target<matrix[i][j]){
                j--;
            }else{
                i++;
            }
        }
        return false;
    }
}
