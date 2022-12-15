// 3 sorted array find common elements
// union intersection of 2 array
// import java.util.+;
import java.util.ArrayList;

public class unioninter {
    
    public static int[] inter(int[] ar1 , int[] ar2 ,int n1,int n2) {

        ArrayList<Integer> flag = new ArrayList<Integer>(0);

        for( int i =0 ; i<n1 ; i++) {
            for(int j= 0 ;j<n2 ; j++){
                if(ar2[j] == ar1[i]){
                    // flag++;
                    flag.add(ar2[j]);
                    break;
                }
            }
        }
        int[] res = new int[flag.size()];
        for(int i=0 ; i<flag.size() ; i++ ){
            res[i] = flag.get(i);
        }
        return res;
    }
    public static void main(String[] args) {
        int ar1[] = {1,2,3,4,5,6,7,8};
        int ar2[] = {4,5};
        int res[] = inter(ar1, ar2, ar1.length, ar2.length);

        for(int i= 0 ;i<res.length ; i++) {
            System.out.print(res[i]);
        }
    }
}
