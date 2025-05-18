abstract class Animal {
       protected String name;
 
     // Animal(String name) { this.name = name; }
 
     public abstract void makeSound();
 
     public String getName() { return name;}
    public void setName(String name){
        this.name =name;
    }
    }
 
 
 // Abstracted class
 class Dog extends Animal {
     //public Dog(String name) { super(name); }
 
     public void makeSound()
     {
         System.out.println(getName() + " barks");
     }
 }
 
 // Abstracted class
 
 
 // Driver Class
 public class AbstractionExample {
     // Main Function
     public static void main(String[] args)
     {
         Dog myDog = new Dog();
         myDog.setName("bubby");
 
         myDog.makeSound();
         
     }
 }