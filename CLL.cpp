#include <iostream>
#include <stdlib.h>

using namespace std;

struct CLLNode{
  int data;
  CLLNode *next;
};

int CLL(CLLNode *head){
  int count = 1;
  CLLNode *current = head;

  if(head == NULL){
    cout << "List is empty." <<endl;
    return 0;
  }else{
    current = current->next;
    count ++;
    while(current->next != head){
	current = current->next;
	count ++;
    }
    return count;
    }
  }

void printCLL(CLLNode *head){
  int count = 0;
  CLLNode *current = head;
  
  cout << "->";
  do{
    cout << current->data << "-";
    current = current->next;
    count ++;
      }while(current != head);
  cout <<endl;
  
  cout << "  | ";
  for(int i = 0; i < count - 2; i++){
    cout << "  ";
  }
  cout << "| " <<endl;

  cout << "   -";
  for(int i = 0; i < count - 2; i++){
    cout << "--";
  }
  cout << "-" <<endl;
}

void insetAtEndInCLL(CLLNode *head, int data){
  CLLNode *current = head;
  CLLNode *newNode; // = (struct node*)(malloc(sizeof(CLLNode)));//<-??//
  // if(!newNode){//<-??////////////////////////////////////////////////
  //   cout << "Memory Error";
  // }
  
  newNode->data = data;
  if(head = NULL){
    newNode = head;
    newNode->next = newNode;
  }else{
    while(current->next != head){
      current = current->next;
    }
    current->next = newNode;
    newNode->next = head;
  }
}

void insertAtBeginInCLL(CLLNode **head, int data){
  CLLNode *newNode;
  CLLNode *temp;
  newNode->data = data;

  if(head == NULL){
    *head = newNode;
    newNode->next = newNode;
  }else{
    temp = *head;
    *head = newNode;
    newNode->next = temp;
  }
}

void deleteLastNodeFromCLL(CLLNode **head){
  CLLNode *temp = *head, *current = *head;
  if(*head == NULL){
    cout << "List Empty" <<endl;
    return;
  }
  while(current->next != *head){
    temp = current;
    current = current->next;
  }
  temp->next = current->next;
  free(current);
}

void deleteFromNodeFromeCLL(CLLNode **head){
  CLLNode *frontNode = *head;
  CLLNode *current = *head;
  if(*head == NULL){
    cout << "List Empty" <<endl;
    return;
  }
  while(current->next != *head){
    current = current->next;
  }
  *head = (*head)->next;
  current->next = *head;
  free(frontNode);
}
