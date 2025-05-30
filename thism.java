class Dog {
    String name;
    int age;

    // No-argument constructor calls two-arg constructor with default values
    public Dog() {
        this("Default Dog", 1);  // Calls Dog(String, int)
    }

    // Constructor with only name, calls two-arg constructor with default age
    public Dog(String name) {
        this(name, 1);  // Calls Dog(String, int)
    }

    // Constructor with name and age - the main constructor
    public Dog(String name, int age) {
        this.name = name;
        this.age = age;
        System.out.println("Dog's name: " + name + ", age: " + age);
    }

    public void bark() {
        System.out.println(name + " says: Woof!");
    }
}

public class thism {
    public static void main(String[] args) {
        Dog dog1 = new Dog();
        dog1.bark();

        Dog dog2 = new Dog("Buddy");
        dog2.bark();

        Dog dog3 = new Dog("Charlie", 5);
        dog3.bark();
    }
}
