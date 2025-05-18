import java.util.*;
 public class selectionsort {

    public static void main(String []ags)
    {
    
        
        int [] array =  {3,4,5,2,1,4};
        
        int n=6;
        
        
        for(int i:  array){
            System.out.print(i+"\t") ;
             
        }System.out.println("\n");
         for(int i=0;i<n;i++){ 
            int k = i;        
            for(int j=i+1;j<n;j++){
                if(array[j]<array[k]){
                   k=j;
                }
            }
            int temp =array[k];
            array[k]=array[i];
            array[i]=temp;
         }
         for(int i:  array){
            System.out.print(i+"\t") ;
             
        }
    }
    
}
