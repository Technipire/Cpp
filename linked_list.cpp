#include<iostream>

using namespace std;

struct Node 
{
  int value;
  Node* next;
};


void initNode(Node* head)
{
  
  head->value = 1;
  head->next = nullptr;
}


bool isEmpty(Node* l)
{
  return l == NULL;
}
void appendNode(Node* head, int n)
{
  Node* iter = head;
  Node* newNode = new Node;
  newNode->value = n;
  newNode->next = nullptr;
  while(true)
  {
    if(iter->next == NULL)
    {
      iter->next = newNode;
      break;
    }
    else
      iter = iter->next;
  }
}
Node* rest(Node* list)
{
  return list->next;
}
void print(Node* head)
{
  Node* iter = head;
  while(true)
  {
    cout << iter->value << endl;
    iter = iter->next;
    if(isEmpty(iter))
      break;
  }
}
Node* deleteNode(Node* head, int n)
{
  Node* iter = head;
  Node* pre_iter = NULL;
  while(true)
  {
    if(iter->value == n)
    {
      if(isEmpty(pre_iter))
      {
	Node* list = rest(iter);
	head->next = NULL;
	delete head;
	return list;
      }
      else
      {
	pre_iter->next = iter->next;
	return head;
      }
    }
    else
    {
      pre_iter = iter;
      iter = iter->next;
    }
    if(isEmpty(iter))
    {
      cout << "not found." << endl;
      return head;
    }
  }
}
Node* prepend(Node* head, int n)
{
  Node* newNode = new Node;
  newNode->value = n;
  newNode->next = head;
  head = newNode;
  return head;
}

int main()
{
  Node* head = new Node;
  initNode(head);
  appendNode(head, 3);
  head = prepend(head, 2);
  print(head);
  cout << "hey" << endl;
  head = deleteNode(head, 4);
  print(head);
}