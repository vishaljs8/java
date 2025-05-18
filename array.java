import java.util.*;
public class array {

    public static void main(String []ags)
    {
    
        
        int [] array =  {8,7,6,9,5,2};
        
        int n=6;
        for(int i:  array){
            System.out.print(i+"\t") ;
             
        }System.out.println("\n");
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1-i;j++){
                if(array[j]<array[j+1]){
                     int temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                }
            }
        }
        for(int i:  array){
            System.out.print(i+"\t") ;
             
        }
    }

}