// Online Java Compiler
// Use this editor to write, compile and run your Java code online

class find {
    
    public int findnew( int[] c ,int total) {
        
        for(int i=0; i<total ; i++){
            if(c[i] != i+c[0]) {
                return (i+c[0]);
            }
        }
        return 0;
    }
    public static void main(String[] args) {

        find res = new find();
        int[] c= {11,12,13,14,16};
        System.out.println(res.findnew(c,c.length));
    }
}