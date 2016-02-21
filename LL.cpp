#include <iostream>

using namespace std;

struct LLNode{
  int data;
  LLNode *next;
};

LLNode findLastN(LLNode *head, int n){
  LLNode *current = head, *current2 = head;
  int count = 1, count2 = 1;

  while(current->next != NULL){
    current = current->next;
    count ++;
  }

  while(count2 != count + 1 - n){
    current2 = current2->next;
    count2 ++;
  }

  return *current2;
}

int main(){
  LLNode *node0, *node1, *node2, *node3, found;
  node0->data = 3;
  node1->data = 1;
  node2->data = 17;
  node3->data = 4;
  node0->next = node1;
  node1->next = node2;
  node2->next = node3;
  node3->next = NULL;

  found = findLastN(node0, 2);

  cout << found.data <<endl;
}
