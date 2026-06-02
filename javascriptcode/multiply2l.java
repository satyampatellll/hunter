//add the given two linklist and multiply the result with of the two linklist
public class multiply2l {
    public static void main(String[] args) {
        // Create first linked list: 3 -> 2 -> 1
        Node list1 = new Node(3);
        list1.next = new Node(2);
        list1.next.next = new Node(1);

        // Create second linked list: 6 -> 5 -> 4
        Node list2 = new Node(6);
        list2.next = new Node(5);
        list2.next.next = new Node(4);

        // Multiply the two linked lists
        int num1 = 0, num2 = 0;
        Node current1 = list1;
        while (current1 != null) {
            num1 = num1 * 10 + current1.data;
            current1 = current1.next;
        }
        Node current2 = list2;
        while (current2 != null) {
            num2 = num2 * 10 + current2.data;
            current2 = current2.next;
        }

        int result = num1 * num2;
        System.out.println("Result of multiplication: " + result);
    }
}
class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}
