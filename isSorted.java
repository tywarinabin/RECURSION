public class isSorted {
    public static boolean isSort(int arr[], int index) {
        if(index == arr.length-1){  // This is hte base case when all condition become true then it return true.
            return true;
        }
        if(arr[index] <arr[index+1]){  // IF first element is less than second then call isSorted function for index+1 and index+2 .
            return isSort(arr, index+1);
        }
        else  // If the first element is greater than Second than simply Return False to main.
        return false;
    }
    public static void main(String args []){
        int arr[] = {2,3,5,6,78,8};
        if(isSort(arr, 0)){
            System.out.println("Array is sorted");
        }
        else{
            System.out.println("Array is not sorted.");
        }
    }
}
