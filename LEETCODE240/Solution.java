package LEETCODE240;

public class Solution {                                //矩阵的特点 是每一行从左到右递增 每一列从上到下递增
    public boolean searchMatrix(int[][] matrix, int target) {
        if(matrix==null||matrix.length==0||matrix[0].length==0)
            return false;
        int row = 0 ;                                   //从矩阵的右上角开始，如果target大于目前位置的值就排除掉这一行，因为此时在这个位置上的是这一行的最大值
        int column = matrix[0].length - 1;              //如果target小于目前为止的值就排除掉这一列的值 因为此时的值是该列最小的值
        while(row<=matrix.length-1&&column>=0){
            if(target == matrix[row][column]){              //如果相等的话就返回true  大于小于等于三种情况都有了对应的处理
                return  true;
            }else if(target>matrix[row][column]){
                row++;
            }else{
                column--;
            }
        }
        return false;
    }
}
