// class Car {
//     Car(String str){
//         System.out.println(str);
//     }
// }
// class Main{
//     public static void main (String[] args) {
//         Car obj=new Car(str:"hello");
//         Car onj1=new Car(str:"hii");
//     }
// }


// class Car {
//     int a;
//     Car(int a){
//         this.a=a;
//     }
// }
// class Main{
//     public static void main (String[] args) {
//         Car obj=new Car(a:5);
//     }
// }



//CREATE A CLASS STUDENT WITH THE FIELDS NAMES AND ROLLNUMBER AND MARKS WRITE A METHOD TO DISPLAY
// STUDENT DETAILS . CREATE 3 STUDENT OBJECTA AND DISPLAY THEIR DATA
class Student {
    String name;
    int rollNumber;
    double marks;

    Student(String name, int rollNumber, double marks) {
        this.name = name;
        this.rollNumber = rollNumber;
        this.marks = marks;
    }

    void displayDetails() {
        System.out.println("Name: " + name);
        System.out.println("Roll Number: " + rollNumber);
        System.out.println("Marks: " + marks);
        System.out.println("-----------------------");
    }
}
public class LEC1 {
    public static void main(String[] args) {
        Student student1 = new Student("Alice", 1, 85.5);
        Student student2 = new Student("Bob", 2, 90.0);
        Student student3 = new Student("Charlie", 3, 78.5);

        student1.displayDetails();
        student2.displayDetails();
        student3.displayDetails();
    }
}
