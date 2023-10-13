#include <stdio.h>
#include <stdlib.h>

#include "./SimpleLinkedLists/SimpleLinkedList.h"

void test() {}
void insertFirst(List *list, int data) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  if (list->head != NULL) {
    newNode->next = list->head;
  }
  list->head = newNode;
}

void insertLast(List *list, int data) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;
  if (list->head == NULL) {
    list->head = newNode;
    return;
  }
  Node *temp = list->head;
  for (temp; temp->next != NULL; temp = temp->next) {
  }
  temp->next = newNode;
}

int get(List *list, int pos) {
  Node *temp = list->head;
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

int set(List *list, int pos, int data) {
  Node *temp = list->head;
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
  list->insertLast(list, 2);
  list->insertFirst(list, 1);
  list->get(list, 0);
  list->set(list, 1, 1);
  return 0;
}