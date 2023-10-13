#ifndef __LIST_NODE_H__
#define __LIST_NODE_H__

typedef int LData;

typedef struct __ListNode {
  LData data;
  struct __ListNode *next;
} ListNode;

typedef ListNode Node;

#endif