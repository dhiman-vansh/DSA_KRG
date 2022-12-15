// Online Java Compiler
// Use this editor to write, compile and run your Java code online

class revar {
    
    public static int[] rotate(int[] arr,int n){
        // int[] newar = new int[n];
        for(int i=0; i<n/2 ; i++) {

            // newar[ i] = arr[n-1-i];
            arr[i] = arr[i] + arr[n-i-1] ;
            arr[n-1-i] = arr[i] - arr[n-1-i];
            arr[i] = arr[i] - arr[n-1-i];            
            // System.out.print(newar[i]);
        }
        
        return arr; 
        // return newar;
    }
    
    public static void main(String[] args) {
        int[] c = {1,2,3,4,5,6};
        int[] res = new int[c.length];
        res = rotate(c, c.length);
        // revar obj = new revar();
        for(int i= 0 ;i<res.length ; i++) {
            System.out.print(res[i]);
        }
    }
}