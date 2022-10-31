#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "list_queue.h"


void init_queue(queue *q)
{
  // Add your init_queue
  q -> front = NULL;
  q -> rear = NULL;
  q -> size = 0;
}

int empty(queue *q)
{
  // Add your empty function 
if (q -> size == 0){
  return 1;
}
else{
  return 0;
}
}

void enqueue(queue *q, int x)
{
  // Add your enqueue function
  qnode *newnode = (qnode *)malloc(sizeof(qnode));
  newnode -> data = x;
  newnode -> next = NULL;

  if (q -> rear = NULL){
    q -> rear = newnode;
    q -> front = newnode;
  }
  else{
    q -> rear -> next = newnode;

  }
  q -> size = q -> size + 1;

}

int dequeue(queue *q)
{
  // Add your dequeue function
  int x;
  assert(q -> size > 0);
  x = q -> front -> data;
  q -> front = q -> front -> next;
  q -> size = q -> size - 1;

  return x;
}
