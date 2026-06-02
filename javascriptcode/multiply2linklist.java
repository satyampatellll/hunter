//multiply 2 linklist 
class nodes{
    int data;
    nodes next;
    nodes(int data){
        this.data=data;
        this.next=null;
        
    }
}
public class multiply2linklist{
    nodes head;
    public void insert (int data){
        nodes newnode=new nodes(data);
        if(head==null){
            head=newnode;
        }
        else{
            nodes current=head;
            while(current.next!=null){
                current=current.next;
            }
            current.next=newnode;
        }
    }
    public void display() {
        nodes current = head;
        while (current != null) {
            System.out.print(current.data + " ");
            current = current.next;
        }
        System.out.println();
    }
    public static void main (String[]args) {
        multiply2linklist list1 = new multiply2linklist();
        list1.insert(3);
        list1.insert(2);
        list1.insert(1);
        System.out.print("List 1: ");
        list1.display();

        multiply2linklist list2 = new multiply2linklist();
        list2.insert(6);
        list2.insert(5);
        list2.insert(4);
        System.out.print("List 2: ");
        list2.display();

        // Multiply the two lists
        int num1 = 0, num2 = 0;
        nodes current1 = list1.head;
        while (current1 != null) {
            num1 = num1 * 10 + current1.data;
            current1 = current1.next;
        }
        nodes current2 = list2.head;
        while (current2 != null) {
            num2 = num2 * 10 + current2.data;
            current2 = current2.next;
        }
        int product = num1 * num2;

        // Create a new list for the product
        multiply2linklist productList = new multiply2linklist();
        String productStr = Integer.toString(product);
        for (char digit : productStr.toCharArray()) {
            productList.insert(Character.getNumericValue(digit));
        }
        
        System.out.print("Product List: ");
        productList.display();
    }
}
