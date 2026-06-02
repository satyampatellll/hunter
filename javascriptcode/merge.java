// class node {
//     int data;
//     node next;

//     node(int data) {
//         this.data = data;
//         this.next = null;
//     }
// }

// class linklist {

//     // Merge two sorted lists
//     node merge(node head1, node head2) {

//         node dummy = new node(0);
//         node tail = dummy;

//         while (head1 != null && head2 != null) {

//             if (head1.data < head2.data) {
//                 tail.next = head1;
//                 head1 = head1.next;
//             } else {
//                 tail.next = head2;
//                 head2 = head2.next;
//             }

//             tail = tail.next;
//         }

//         if (head1 != null) {
//             tail.next = head1;
//         }

//         if (head2 != null) {
//             tail.next = head2;
//         }

//         return dummy.next;
//     }

//     // Print list
//     void printlist(node head) {

//         while (head != null) {
//             System.out.print(head.data + " ");
//             head = head.next;
//         }

//         System.out.println();
//     }

//     // Remove duplicates
//     void removeDuplicates(node head) {

//         node current = head;

//         while (current != null && current.next != null) {

//             if (current.data == current.next.data) {
//                 current.next = current.next.next;
//             } else {
//                 current = current.next;
//             }
//         }
//     }

//     public static void main(String[] args) {

//         linklist list = new linklist();

//         // First list
//         node head1 = new node(1);
//         head1.next = new node(3);
//         head1.next.next = new node(5);

//         // Second list
//         node head2 = new node(2);
//         head2.next = new node(4);
//         head2.next.next = new node(6);

//         // Merge
//         node mergedHead = list.merge(head1, head2);

//         System.out.println("Merged List:");
//         list.printlist(mergedHead);

//         // Duplicate example
//         node head3 = new node(1);
//         head3.next = new node(1);
//         head3.next.next = new node(2);
//         head3.next.next.next = new node(3);
//         head3.next.next.next.next = new node(3);a

//         System.out.println("Original List with Duplicates:");
//         list.printlist(head3);

//         list.removeDuplicates(head3);

//         System.out.println("List after Removing Duplicates:");
//         list.printlist(head3);
//     }
// // }


// class node {
//     class static void main(string[]){

//     }
// }
