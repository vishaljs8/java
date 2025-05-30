 class student{
  private String name;
  private int age;
  public String getName(){ return name;}
  public void setName(String name){ this.name=name;}
  public int getAge(){ return age;}
  public void setAge(int age){ this.age=age;}
}


public class encapsulation{
    public static void main(String[]args){
        student s1 = new student();
        s1.setName("vishal");
        s1.setAge(29);
         System.out.println(s1.getName());
         System.out.println(s1.getAge());
         System.out.print(System.currentTimeMillis());

        
    }
    
}
