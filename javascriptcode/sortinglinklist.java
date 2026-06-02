//sorting linklist  0 1 0 2 1 0 1 2
class Node{
    int data;
    Node next;
    Node(int data){
        this.data=data;
        this.next=null;
    }
}
public class sortinglinklist {
    Node head;
    public void insert(int data){
        Node newnode=new Node(data);
        if(head==null){
            head=newnode;
            return;
        }
        Node temp=head;
        while(temp.next!=null){
            temp=temp.next;
        }
        temp.next=newnode;
    }
    public void sort(){
        int count0=0,count1=0,count2=0;
        Node temp=head;
        while(temp!=null){
            switch (temp.data) {
                case 0:
                    count0++;
                    break;
                case 1:
                    count1++;
                    break;
                default:
                    count2++;
                    break;
            }
            temp=temp.next;
        }
        temp=head;
        while(temp!=null){
            if(count0>0){
                temp.data=0;
                count0--;
            }else if(count1>0){
                temp.data=1;
                count1--;
            }else{
                temp.data=2;
                count2--;
            }
            temp=temp.next;
        }
    }
    public void display(){
        Node temp=head;
        while(temp!=null){
            System.out.print(temp.data+" ");
            temp=temp.next;
        }
    }
    public static void main(String[] args) {
        sortinglinklist list=new sortinglinklist();
        list.insert(0);
        list.insert(1);
        list.insert(0);
        list.insert(2);
        list.insert(1);
        list.insert(0);
        list.insert(1);
        list.insert(2);
        System.out.println("Before sorting:");
        list.display();
        list.sort();
        System.out.println("\nAfter sorting:");
        list.display();
    }
}
