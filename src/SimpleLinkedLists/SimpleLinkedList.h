#ifndef __SIMPLE_LINKED_LIST_H__
#define __SIMPLE_LINKED_LIST_H__

#include "../ListNode/ListNode.h"

typedef int LData;

typedef struct __SimpleLinkedList {
  Node *head;
  void (*constructor)();
  void (*insertFirst)(Node *head, int data);
  void (*insertLast)(Node *head, int data);
  int (*get)(Node *head, int pos);
  int (*set)(Node *head, int pos, int data);
  int (*remove)(int data);
  int (*count)();
} SimpleLinkedList;

typedef SimpleLinkedList List;

#endif