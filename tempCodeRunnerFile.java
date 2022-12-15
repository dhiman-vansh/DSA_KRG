import java.util.Stack;

class parantcheck {
    public static boolean isValid(String s) {
        if(s.length()%2!=0){
            return false;
        }
        char temp='a';
        Stack<Character> STACK = new Stack<Character>();
        // STACK.push('[');
        // STACK.push(']');
        // boolean flag = retu/
        for(char a: s.toCharArray()){
            if(a=='{' || a=='(' || a=='['){
                STACK.push(a);
            }
            if(a=='}' || a==')' || a==']'){
                if(STACK.isEmpty()==true) return false;
                else{
                    temp = STACK.pop();
                    if(a==']' && temp!='['){ return false; }
                    if(a==')' && temp!='('){ return false; }
                    if(a=='}' && temp!='{'){ return false; }
                }
                
            }
    }
 if(STACK.isEmpty()==true) return true;
 else return false;

}

public static void main(String[] args){
    String inp = "()";
    System.out.println(isValid(inp));
}
}