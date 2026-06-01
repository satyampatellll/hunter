
//REVERSE A SINGLY LINKED LIST
// #include <stdio.h>
// #include <stdlib.h>
// struct Node {
//     int data;
//     struct Node* next;
// };
// struct Node* first = NULL, *tmp, *ttmp;
// void createFirst() {
//     first = (struct Node*)malloc(sizeof(struct Node));
//     if (first == NULL) {
//         printf("Memory not allocated");
//         return;
//     }
//     printf("Enter value: ");
//     scanf("%d", &first->data);
//     first->next = NULL;
// }
// void addNode() {
//     tmp = first;
//     while (tmp->next != NULL)
//         tmp = tmp->next;
//     ttmp = (struct Node*)malloc(sizeof(struct Node));
//     printf("Enter value: ");
//     scanf("%d", &ttmp->data);
//     ttmp->next = NULL;
//     tmp->next = ttmp;
// }
// void reverseList() {
//     struct Node* prev = NULL;
//     struct Node* current = first;
//     struct Node* next = NULL;
//     while (current != NULL) {
//         next = current->next;
//         current->next = prev;
//         prev = current;
//         current = next;
//     }
//     first = prev;
// }

// void printList() {
//     struct Node* current = first;
//     if (first == NULL)
//         return;
//     while (current != NULL) {
//         printf("%d - ", current->data);
//         current = current->next;
//     }
//     printf("DONE\n");
// }
// int main() {
//     createFirst();
//     addNode();
//     addNode();
//     printf("Original List:\n");
//     printList();
//     reverseList();
//     printf("Reversed List:\n");
//     printList();
// }



//Alinked list cointain natural num 1-10 split it into two seperate list so that one list contain s all the even and aanotheer cointain all the odd num
// #include <stdio.h>
// #include <stdlib.h>
// struct Node {
//     int data;
//     struct Node* next;
// };
// struct Node* first = NULL, *tmp, *ttmp;
// void createFirst() {
//     first = (struct Node*)malloc(sizeof(struct Node));
//     if (first == NULL) {
//         printf("Memory not allocated");
//         return;
//     }
//     printf("Enter value: ");
//     scanf("%d", &first->data);
//     first->next = NULL;
// }
// void addNode() {
//     tmp = first;
//     while (tmp->next != NULL)
//         tmp = tmp->next;
//     ttmp = (struct Node*)malloc(sizeof(struct Node));
//     printf("Enter value: ");
//     scanf("%d", &ttmp->data);
//     ttmp->next = NULL;
//     tmp->next = ttmp;
// }
// void splitList(struct Node** oddHead, struct Node** evenHead) {
//     struct Node* oddTail = NULL;
//     struct Node* evenTail = NULL;
//     struct Node* current = first;
//     while (current != NULL) {
//         if (current->data % 2 == 0) {
//             if (*evenHead == NULL) {
//                 *evenHead = current;
//                 evenTail = current;
//             } else {
//                 evenTail->next = current;
//                 evenTail = evenTail->next;
//             }
//         } else {
//             if (*oddHead == NULL) {
//                 *oddHead = current;
//                 oddTail = current;
//             } else {
//                 oddTail->next = current;
//                 oddTail = oddTail->next;
//             }
//         }
//         current = current->next;
//     }
//     if (oddTail != NULL)
//         oddTail->next = NULL;
//     if (evenTail != NULL)
//         evenTail->next = NULL;
// }
// void printList(struct Node* head) {
//     struct Node* current = head;
//     if (head == NULL)
//         return;
//     while (current != NULL) {
//         printf("%d - ", current->data);
//         current = current->next;
//     }
//     printf("DONE\n");
// }
// int main() {
//     createFirst();
//     for (int i = 0; i < 9; i++) {
//         addNode();
//     }
//     struct Node* oddHead = NULL;
//     struct Node* evenHead = NULL;
//     splitList(&oddHead, &evenHead);
//     printf("Odd List:\n");
//     printList(oddHead);
//     printf("Even List:\n");
//     printList(evenHead);
// }

// // we have 2 linked list one contain all even and another contain all the odd num merge these linked list into a single link list so that the linked list contain all the natural num
// #include <stdio.h>
// #include <stdlib.h>
// struct Node {
//     int data;
//     struct Node* next;
// };
// struct Node* first = NULL, *tmp, *ttmp;
// void createFirst() {
//     first = (struct Node*)malloc(sizeof(struct Node));
//     if (first == NULL) {
//         printf("Memory not allocated");
//         return;
//     }
//     printf("Enter value: ");
//     scanf("%d", &first->data);
//     first->next = NULL;
// }
// void addNode() {
//     tmp = first;
//     while (tmp->next != NULL)
//         tmp = tmp->next;
//     ttmp = (struct Node*)malloc(sizeof(struct Node));
//     printf("Enter value: ");
//     scanf("%d", &ttmp->data);
//     ttmp->next = NULL;
//     tmp->next = ttmp;
// }
// struct Node* mergeLists(struct Node* oddHead, struct Node* evenHead) {
//     struct Node* mergedHead = NULL;
//     struct Node* mergedTail = NULL;
//     struct Node* oddCurrent = oddHead;
//     struct Node* evenCurrent = evenHead;
//     while (oddCurrent != NULL || evenCurrent != NULL) {
//         if (oddCurrent != NULL) {
//             if (mergedHead == NULL) {
//                 mergedHead = oddCurrent;
//                 mergedTail = oddCurrent;
//             } else {
//                 mergedTail->next = oddCurrent;
//                 mergedTail = mergedTail->next;
//             }
//             oddCurrent = oddCurrent->next;
//         }
//         if (evenCurrent != NULL) {
//             if (mergedHead == NULL) {
//                 mergedHead = evenCurrent;
//                 mergedTail = evenCurrent;
//             } else {
//                 mergedTail->next = evenCurrent;
//                 mergedTail = mergedTail->next;
//             }
//             evenCurrent = evenCurrent->next;
//         }
//     }
//     if (mergedTail != NULL)
//         mergedTail->next = NULL;
//     return mergedHead;
// }
// void printList(struct Node* head) {
//     struct Node* current = head;
//     if (head == NULL)
//         return;
//     while (current != NULL) {
//         printf("%d - ", current->data);
//         current = current->next;
//     }
//     printf("DONE\n");
// }
// int main() {
//     printf("Creating Odd List:\n");
//     createFirst();
//     for (int i = 0; i < 4; i++) {
//         addNode();
//     }
//     struct Node* oddHead = first;

//     first = NULL; // Reset for even list
//     printf("Creating Even List:\n");
//     createFirst();
//     for (int i = 0; i < 4; i++) {
//         addNode();
//     }
//     struct Node* evenHead = first;

//     struct Node* mergedHead = mergeLists(oddHead, evenHead);
//     printf("Merged List:\n");
//     printList(mergedHead);
// }

// // swapping of first and last node in doubly linked list
// #include <stdio.h>
// #include <stdlib.h>
// struct Node {
//     int data;
//     struct Node* next;
//     struct Node* prev;
// };
// struct Node* first = NULL, *tmp, *ttmp;
// void createFirst() {
//     first = (struct Node*)malloc(sizeof(struct Node));
//     if (first == NULL) {
//         printf("Memory not allocated");
//         return;
//     }
//     printf("Enter value: ");
//     scanf("%d", &first->data);
//     first->next = NULL;
//     first->prev = NULL;
// }
// void addNode() {
//     tmp = first;
//     while (tmp->next != NULL)
//         tmp = tmp->next;
//     ttmp = (struct Node*)malloc(sizeof(struct Node));
//     printf("Enter value: ");
//     scanf("%d", &ttmp->data);
//     ttmp->next = NULL;
//     ttmp->prev = tmp;
//     tmp->next = ttmp;
// }

// void swapFirstAndLast() {
//     if (first == NULL || first->next == NULL)
//         return;

//     struct Node* last = first;
//     while (last->next != NULL)
//         last = last->next;

//     if (first->next == last) {
//         last->next = first;
//         first->prev = last;
//         first->next = NULL;
//         last->prev = NULL;
//         first = last;
//         return;
//     }

//     struct Node* second = first->next;
//     struct Node* secondLast = last->prev;

//     last->next = second;
//     second->prev = last;

//     secondLast->next = first;
//     first->prev = secondLast;

//     first->next = NULL;
//     last->prev = NULL;

//     first = last;
// }
// void printList() {
//     struct Node* current = first;
//     if (first == NULL)
//         return;
//     while (current != NULL) {
//         printf("%d - ", current->data);
//         current = current->next;
//     }
//     printf("DONE\n");
// }
// int main() {
//     createFirst();
//     for (int i = 0; i < 4; i++) {
//         addNode();
//     }
//     printf("Original List:\n");
//     printList();
//     swapFirstAndLast();
//     printf("List after swapping first and last nodes:\n");
//     printList();
// }

// //swapping of first and second node in doubly linked list
// #include <stdio.h>
// #include <stdlib.h>
// struct Node {
//     int data;
//     struct Node* next;
//     struct Node* prev;
// };
// struct Node* first = NULL, *tmp, *ttmp;
// void createFirst() {
//     first = (struct Node*)malloc(sizeof(struct Node));
//     if (first == NULL) {
//         printf("Memory not allocated");
//         return;
//     }
//     printf("Enter value: ");
//     scanf("%d", &first->data);
//     first->next = NULL;
//     first->prev = NULL;
// }
// void addNode() {
//     tmp = first;
//     while (tmp->next != NULL)
//         tmp = tmp->next;
//     ttmp = (struct Node*)malloc(sizeof(struct Node));
//     printf("Enter value: ");
//     scanf("%d", &ttmp->data);
//     ttmp->next = NULL;
//     ttmp->prev = tmp;
//     tmp->next = ttmp;
// }
// void swapFirstAndSecond() {
//     if (first == NULL || first->next == NULL)
//         return;

//     struct Node* second = first->next;
//     struct Node* third = second->next;

//     second->prev = NULL;
//     second->next = first;
//     first->prev = second;
//     first->next = third;

//     if (third != NULL)
//         third->prev = first;

//     first = second;
// }
// void printList() {
//     struct Node* current = first;
//     if (first == NULL)
//         return;
//     while (current != NULL) {
//         printf("%d - ", current->data);
//         current = current->next;
//     }
//     printf("DONE\n");
// }
// int main() {
//     createFirst();
//     for (int i = 0; i < 4; i++) {
//         addNode();
//     }
//     printf("Original List:\n");
//     printList();
//     swapFirstAndSecond();
//     printf("List after swapping first and second nodes:\n");
//     printList();
// }

// //creation of the polinomial list perform addition and multiplication of two polinomial
// #include <stdio.h>
// #include <stdlib.h>
// struct Node {
//     int coeff;
//     int exp;
//     struct Node* next;
// };
// struct Node* createNode(int coeff, int exp) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->coeff = coeff;
//     newNode->exp = exp;
//     newNode->next = NULL;
//     return newNode;
// }
// void insertTerm(struct Node** head, int coeff, int exp) {
//     struct Node* newNode = createNode(coeff, exp);
//     if (*head == NULL || (*head)->exp < exp) {
//         newNode->next = *head;
//         *head = newNode;
//     } else {
//         struct Node* temp = *head;
//         while (temp->next != NULL && temp->next->exp >= exp) {
//             if (temp->next->exp == exp) {
//                 temp->next->coeff += coeff;
//                 free(newNode);
//                 return;
//             }
//             temp = temp->next;
//         }
//         newNode->next = temp->next;
//         temp->next = newNode;
//     }
// }
// void printPolynomial(struct Node* head) {
//     struct Node* temp = head;
//     while (temp != NULL) {
//         printf("%dx^%d", temp->coeff, temp->exp);
//         temp = temp->next;
//         if (temp != NULL)
//             printf(" + ");
//     }
//     printf("\n");
// }
// struct Node* addPolynomials(struct Node* poly1, struct Node* poly2) {
//     struct Node* result = NULL;
//     struct Node* p1 = poly1;
//     struct Node* p2 = poly2;
//     while (p1 != NULL && p2 != NULL) {
//         if (p1->exp > p2->exp) {
//             insertTerm(&result, p1->coeff, p1->exp);
//             p1 = p1->next;
//         } else if (p1->exp < p2->exp) {
//             insertTerm(&result, p2->coeff, p2->exp);
//             p2 = p2->next;
//         } else {
//             insertTerm(&result, p1->coeff + p2->coeff, p1->exp);
//             p1 = p1->next;
//             p2 = p2->next;
//         }
//     }
//     while (p1 != NULL) {
//         insertTerm(&result, p1->coeff, p1->exp);
//         p1 = p1->next;
//     }
//     while (p2 != NULL) {
//         insertTerm(&result, p2->coeff, p2->exp);
//         p2 = p2->next;
//     }
//     return result;
// }
// int main() {
//     struct Node* poly1 = NULL;
//     struct Node* poly2 = NULL;

//     insertTerm(&poly1, 3, 2);
//     insertTerm(&poly1, 5, 1);
//     insertTerm(&poly1, 6, 0);

//     insertTerm(&poly2, 4, 3);
//     insertTerm(&poly2, 2, 1);
//     insertTerm(&poly2, 1, 0);

//     printf("Polynomial 1: ");
//     printPolynomial(poly1);
//     printf("Polynomial 2: ");
//     printPolynomial(poly2);

//     struct Node* sum = addPolynomials(poly1, poly2);
//     printf("Sum of Polynomials: ");
//     printPolynomial(sum);

//     return 0;
// }



// /* DELETE FIRST NODE */
// #include <stdio.h>
// #include <stdlib.h>
// struct Node {
//     int data;
//     struct Node* next;
// };
// struct Node* first = NULL, *tmp, *ttmp;
// void createFirst() {
//     first = (struct Node*)malloc(sizeof(struct Node));
//     if (first == NULL) {
//         printf("Memory not allocated");
//         return;
//     }
//     printf("Enter value: ");
//     scanf("%d", &first->data);
//     first->next = NULL;
// }
// void addNode() {
//     tmp = first;
//     while (tmp->next != NULL)
//         tmp = tmp->next;
//     ttmp = (struct Node*)malloc(sizeof(struct Node));
//     printf("Enter value: ");
//     scanf("%d", &ttmp->data);
//     ttmp->next = NULL;
//     tmp->next = ttmp;
// }
// void deleteFirstNode() {
//     if (first == NULL) {
//         printf("List is empty, nothing to delete.\n");
//         return;
//     }
//     struct Node* temp = first;
//     first = first->next;
//     free(temp);
// }
// void printList() {
//     struct Node* current = first;
//     if (first == NULL)
//         return;
//     while (current != NULL) {
//         printf("%d - ", current->data);
//         current = current->next;
//     }
//     printf("DONE\n");
// }
// int main() {
//     createFirst();
//     for (int i = 0; i < 4; i++) {
//         addNode();
//     }
//     printf("Original List:\n");
//     printList();
//     deleteFirstNode();
//     printf("List after deleting first node:\n");
//     printList();
// }


// //DELETE LAST NODE 
// #include <stdio.h>
// #include <stdlib.h>
// struct Node {
//     int data;
//     struct Node* next;
// };
// struct Node* first = NULL, *tmp, *ttmp;
// void createFirst() {
//     first = (struct Node*)malloc(sizeof(struct Node));
//     if (first == NULL) {
//         printf("Memory not allocated");
//         return;
//     }
//     printf("Enter value: ");
//     scanf("%d", &first->data);
//     first->next = NULL;
// }
// void addNode() {
//     tmp = first;
//     while (tmp->next != NULL)
//         tmp = tmp->next;
//     ttmp = (struct Node*)malloc(sizeof(struct Node));
//     printf("Enter value: ");
//     scanf("%d", &ttmp->data);
//     ttmp->next = NULL;
//     tmp->next = ttmp;
// }
// void deleteLastNode() {
//     if (first == NULL) {
//         printf("List is empty, nothing to delete.\n");
//         return;
//     }
//     if (first->next == NULL) {
//         free(first);
//         first = NULL;
//         return;
//     }
//     struct Node* temp = first;
//     while (temp->next->next != NULL)
//         temp = temp->next;
//     free(temp->next);
//     temp->next = NULL;
// }
// void printList() {
//     struct Node* current = first;
//     if (first == NULL)
//         return;
//     while (current != NULL) {
//         printf("%d - ", current->data);
//         current = current->next;
//     }
//     printf("DONE\n");
// }
// int main() {
//     createFirst();
//     for (int i = 0; i < 4; i++) {
//         addNode();
//     }
//     printf("Original List:\n");
//     printList();
//     deleteLastNode();
//     printf("List after deleting last node:\n");
//     printList();
// }

// //SWAP 2ND ND 1ST NODE 
// #include <stdio.h>
// #include <stdlib.h>
// struct Node {
//     int data;
//     struct Node* next;
// };
// struct Node* first = NULL, *tmp, *ttmp;
// void createFirst() {
//     first = (struct Node*)malloc(sizeof(struct Node));
//     if (first == NULL) {
//         printf("Memory not allocated");
//         return;
//     }
//     printf("Enter value: ");
//     scanf("%d", &first->data);
//     first->next = NULL;
// }       
// void addNode() {
//     tmp = first;
//     while (tmp->next != NULL)
//         tmp = tmp->next;
//     ttmp = (struct Node*)malloc(sizeof(struct Node));
//     printf("Enter value: ");
//     scanf("%d", &ttmp->data);
//     ttmp->next = NULL;
//     tmp->next = ttmp;
// }
// void swapFirstAndSecond() {
//     if (first == NULL || first->next == NULL)
//         return;

//     struct Node* second = first->next;
//     first->next = second->next;
//     second->next = first;
//     first = second;
// }
// void printList() {
//     struct Node* current = first;
//     if (first == NULL)
//         return;
//     while (current != NULL) {
//         printf("%d - ", current->data);
//         current = current->next;
//     }
//     printf("DONE\n");
// }
// int main() {
//     createFirst();
//     for (int i = 0; i < 4; i++) {
//         addNode();
//     }
//     printf("Original List:\n");
//     printList();
//     swapFirstAndSecond();
//     printf("List after swapping first and second nodes:\n");
//     printList();
// }

// //SWAP 2ND ND 2ND LAST NODE 
// #include <stdio.h>
// #include <stdlib.h>
// struct Node {
//     int data;
//     struct Node* next;
// };
// struct Node* first = NULL, *tmp, *ttmp;
// void createFirst() {
//     first = (struct Node*)malloc(sizeof(struct Node));
//     if (first == NULL) {
//         printf("Memory not allocated");
//         return;
//     }
//     printf("Enter value: ");
//     scanf("%d", &first->data);
//     first->next = NULL;
// }
// void addNode() {
//     tmp = first;
//     while (tmp->next != NULL)
//         tmp = tmp->next;
//     ttmp = (struct Node*)malloc(sizeof(struct Node));
//     printf("Enter value: ");
//     scanf("%d", &ttmp->data);
//     ttmp->next = NULL;
//     tmp->next = ttmp;
// }
// void swapSecondAndSecondLast() {
//     if (first == NULL || first->next == NULL || first->next->next == NULL)
//         return;

//     struct Node* prevSecond = first;
//     struct Node* second = first->next;

//     struct Node* prevSecondLast = NULL;
//     struct Node* secondLast = first;
//     while (secondLast->next != NULL) {
//         prevSecondLast = secondLast;
//         secondLast = secondLast->next;
//     }
//     if (prevSecondLast == second) {
//         second->next = secondLast->next;
//         secondLast->next = second;
//         prevSecond->next = secondLast;
//     } else {
//         struct Node* temp = second->next;
//         prevSecond->next = secondLast;
//         secondLast->next = temp;

//         prevSecondLast->next = second;
//         second->next = NULL;
//     }
// }
// void printList() {
//     struct Node* current = first;
//     if (first == NULL)
//         return;
//     while (current != NULL) {
//         printf("%d - ", current->data);
//         current = current->next;
//     }
//     printf("DONE\n");
// }
// int main() {
//     createFirst();
//     for (int i = 0; i < 4; i++) {
//         addNode();
//     }
//     printf("Original List:\n");
//     printList();
//     swapSecondAndSecondLast();
//     printf("List after swapping second and second last nodes:\n");
//     printList();
// }


// //SWAP 1ST ND 2ND NODE

// #include <stdio.h>
// #include <stdlib.h>
// struct Node {
//     int data;
//     struct Node* next;
// };
// struct Node* first = NULL, *tmp, *ttmp;
// void createFirst() {
//     first = (struct Node*)malloc(sizeof(struct Node));
//     if (first == NULL) {
//         printf("Memory not allocated");
//         return;
//     }
//     printf("Enter value: ");
//     scanf("%d", &first->data);
//     first->next = NULL;
// }
// void addNode() {
//     tmp = first;
//     while (tmp->next != NULL)
//         tmp = tmp->next;
//     ttmp = (struct Node*)malloc(sizeof(struct Node));
//     printf("Enter value: ");
//     scanf("%d", &ttmp->data);
//     ttmp->next = NULL;
//     tmp->next = ttmp;
// }
// void swapFirstAndSecond() {
//     if (first == NULL || first->next == NULL)
//         return;

//     struct Node* second = first->next;
//     first->next = second->next;
//     second->next = first;
//     first = second;
// }
// void printList() {
//     struct Node* current = first;
//     if (first == NULL)
//         return;
//     while (current != NULL) {
//         printf("%d - ", current->data);
//         current = current->next;
//     }
//     printf("DONE\n");
// }
// int main() {
//     createFirst();
//     for (int i = 0; i < 4; i++) {
//         addNode();
//     }
//     printf("Original List:\n");
//     printList();
//     swapFirstAndSecond();
//     printf("List after swapping first and second nodes:\n");
//     printList();
// }