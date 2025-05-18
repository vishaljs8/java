public class insertionsort {

    public static void main(String []ags)
    {
    
        
        int [] array =  {3,4,5,2,1,4};
        
        int n=6;
        
        
        for(int i:  array){
            System.out.print(i+"\t") ;
             
        }System.out.println("\n");
         for(int i=1;i<n;i++){ 
             int key =array[i]; 
             
             
            int j=i-1;
            while(j>=0&&array[j]>key){
              array[j+1]=array[j];
              j--;
            }
            array[j+1]=key;
         }
         for(int i:  array){
            System.out.print(i+"\t") ;
             
        }
    }
    
}

    

