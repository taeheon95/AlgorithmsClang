#include <stdio.h>
#include <stdlib.h>

#include "./SimpleLinkedLists/SimpleLinkedList.h"

void test() {}
void insertFirst(Node *head, int data) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = head->next;
  head->next = newNode;
}

void insertLast(Node *head, int data) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;
  Node *temp = head;
  for (temp; temp->next != NULL; temp = temp->next) {
  }
  temp->next = newNode;
}

int get(Node *head, int pos) {
  Node *temp = head;
  int i = 0, returnVal = -1;
  while (i < pos && temp->next != NULL) {
    i++;
    temp = temp->next;
  }
  if (i == pos) {
    returnVal = temp->data;
  }
  return returnVal;
}

int set(Node *head, int pos, int data) {
  Node *temp = head;
  int i = 0;
  while (i < pos && temp->next != NULL) {
    i++;
    temp = temp->next;
  }
  if (i == pos) {
    temp->data = data;
    return 1;
  }
  return -1;
}

int main(int argc, char *argv[]) {
  List *list = (List *)malloc(sizeof(List));
  list->constructor = test;
  list->insertFirst = insertFirst;
  list->insertLast = insertLast;
  list->get = get;
  list->set = set;
  list->insertFirst(list->head, 1);
  list->insertLast(list->head, 2);
  list->get(list->head, 0);
  list->set(list->head, 1, 1);
  return 0;
}