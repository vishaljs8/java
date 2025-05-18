class student{
   private String name;
   private int age;
public String getName() {
    return name;
}
public void setName(String name) {
    this.name = name;
}
public int getAge() {
    return age;
}
public void setAge(int age) {
    this.age = age;
}
}

 class vishal extends student{
   
    public void show(){
        System.out.println(getName());
        System.out.println(getAge());
    }
} 
public class inheritance{
public static void main (String[] args){
    vishal vishal = new vishal();
    vishal.setName("vishal");
    vishal.setAge(60);
    vishal.show();
    
}
}