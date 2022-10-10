public class isSorted {
    public static boolean isSort(int arr[], int index) {
        if(index == arr.length-1){
            return true;
        }
        if(arr[index] <arr[index+1]){
            return isSort(arr, index+1);
        }
        else
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
