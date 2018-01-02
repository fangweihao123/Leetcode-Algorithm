package LEETCODE74;

class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        if(matrix.length==0)                                 //如果输入的矩阵为空，就直接返回false
            return false;
        int i=0,j=matrix[0].length-1;                        //i表示当前的行数 j表示当前的列数
        while(j>=0&&i<matrix.length){
            if(matrix[i][j]==target){                        //如果找到target 就返回true
                return true;
            }else if(target<matrix[i][j]){                   //如果target的值小于这一行的最后一个值 说明target就在这一行中
                j--;
            }else{                                           //target大于这一行的最后一个值，说明这一行中不存在target 移到下一行
                i++;
            }
        }
        return false;
    }
}
