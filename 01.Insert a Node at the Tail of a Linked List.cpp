
// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
SinglyLinkedListNode* tem = head;
         SinglyLinkedListNode * t = (SinglyLinkedList*)malloc(sizeof(SinglyLinkedList));
         
         t->data = data;
         t->next = NULL;
    if(head == NULL){
        head = t;
        return head;
    }
         while(tem->next != NULL){
             tem = tem->next;
         }
        tem->next = t;
     return head;

}

