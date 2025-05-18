public class function {
    public static  void number(int n){
    
        if(n>0)
         
        number(n-1);   
        System.out.println(n);
        
    }
    
    public static void main(String[] args){
        number(5);
    }
    
}
