import java.util.ArrayList;

class Subarr {
    public static int[] twoSum(int[] nums, int target) {
        ArrayList<Integer> flag = new ArrayList<Integer>(0);

        for(int i=0; i<nums.length ; i++){
            for(int j=i+1; j<nums.length ; j++){
                if( nums[i] + nums[j] == target ){
                    flag.add(i);
                    flag.add(j);
                }
            }
        }
        int[] res = new int[flag.size()];
        for(int i=0 ; i<flag.size() ; i++ ){
            res[i] = flag.get(i);
        }
        return res; 
    }

    public static void main(String[] args){
        int[] arr= {2,7,11,15};
        int target = 9;
        int[] result = twoSum(arr, target);
        for (int i : result) {
            System.out.println(arr[i]);
        }
    }
}
