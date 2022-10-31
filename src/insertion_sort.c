#include "insertion_sort.h"
#include "linked_list.h"



void sort(linked_list *llPtr)
{
 // Add your sort function here
 node_t *cur = llPtr -> head -> next; /*Current node, points to 2nd node in list*/
 node_t *prev = llPtr -> head; /*Previous node, points to 1st node in list*/
 node_t *counter = llPtr -> head;

while(cur != NULL){
//Checks if cur needs to be swapped into the new head
    if(cur -> data < prev -> data && prev == llPtr -> head){
        llPtr -> head = swap(prev, cur);
        cur = llPtr -> head -> next; /*Makes sure cur is pointing to the 2nd element again*/
        prev = llPtr -> head; /*Likewise prev is now pointing to the first element*/
    }
// If cur needs to be sorted but not into a new head
    else if (cur -> data < prev -> data){
        while (counter -> next != prev){ /*Sets the counter to one node before prev*/
            counter = counter -> next;
        }
        counter -> next = swap(prev, cur); /*Since the counter is one node before prev it's next should point to prev after swap*/
        prev = counter; /*Sets prev to one node before cur*/
        counter = llPtr -> head; /*Resets the counter*/
    }

    else{
//Updates cur and prev so they point to the next nodes
    cur = cur -> next;
    prev = prev -> next;
    }
}
    
 }

