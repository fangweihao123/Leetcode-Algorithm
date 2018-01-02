package LEETCODE74;

public class Main {

    public static void main(String[] args) {
        Solution solution = new Solution();
        int [][]matrix = {{1,   3,  5,  7},{10, 11, 16, 20},{23, 30, 34, 50}};
        if(solution.searchMatrix(matrix,3)){
            System.out.println("Hello World!");
        }
    }
}
