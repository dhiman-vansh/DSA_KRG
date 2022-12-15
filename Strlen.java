class Strlen {
    public static void main(String[] args) {
        // String n = "jal";

        //strlength 
        // int cnt= 0;
        // for (char a : n.toCharArray()) {
        //     cnt++;
        // }
        // System.out.println(cnt);
    
        //concat
        // String m ="vaadsnlkdsa";
        // n= n+m;
        // System.out.println(n);

        //stradd till n
        // String m = "hjashfal";
        // for(int i=0 ; i<4 ; i++ ){
        //     n = n+ m.charAt(i);
        // }
        // System.out.println(n);
        

        int[] arr = {10,20,40,1,3};
        // int temp = arr[0];
        // int tempi = 0;
        for(int i=arr.length-1 ; i>0 ; i--){
            for(int j=0 ; j<arr.length ; j++){
                if(arr[i]<=arr[j]){
                    arr[i] = arr[j] + arr[i];
                    arr[j] = arr[i]- arr[j];
                    arr[i] = arr[i]- arr[j];
                }
            }
        }

        for(int i=0 ; i<arr.length; i++){
            System.out.println(arr[i]);
        }
    }
}