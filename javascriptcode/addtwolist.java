// node addtwolist(node head1, node head2) {

//     node dummy = new node(0);
//     node tail = dummy;

//     while (head1 != null && head2 != null) {

//         int sum = head1.data + head2.data;
//         tail.next = new node(sum);
//         tail = tail.next;

//         head1 = head1.next;
//         head2 = head2.next;
//     }

//     return dummy.next;
// }


// recursive approach
class linklist {
    static class node {
        int data;
        node next;

        node(int data) {
            this.data = data;
        }
    }

    void reorder(node head) {
        if (head == null || head.next == null) {
            return;
        }

        node slow = head;
        node fast = head;

        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }

        node secondHalf = reverse(slow);
        node firstHalf = head;

        while (secondHalf != null && firstHalf != null) {
            node temp1 = firstHalf.next;
            node temp2 = secondHalf.next;

            firstHalf.next = secondHalf;
            secondHalf.next = temp1;

            firstHalf = temp1;
            secondHalf = temp2;
        }
    }

    node reverse(node head) {
        node prev = null;
        node current = head;

        while (current != null) {
            node next = current.next;
            current.next = prev;
            prev = current;
            current = next;
        }

        return prev;
    }
}

