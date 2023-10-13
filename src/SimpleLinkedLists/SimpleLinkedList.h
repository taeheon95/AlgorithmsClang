#ifndef __SIMPLE_LINKED_LIST_H__
#define __SIMPLE_LINKED_LIST_H__

#include "../ListNode/ListNode.h"

typedef int LData;

typedef struct __SimpleLinkedList {
  Node *head;
  void (*constructor)();
  void (*insertFirst)(__SimpleLinkedList *list, int data);
  void (*insertLast)(__SimpleLinkedList *list, int data);
  int (*get)(__SimpleLinkedList *list, int pos);
  int (*set)(__SimpleLinkedList *list, int pos, int data);
  int (*remove)(int data);
  int (*count)();
} SimpleLinkedList;

typedef SimpleLinkedList List;

#endif