#include <iostream>
#include <string>
#include <vector>
#include "Node.h"

using namespace std;

Node::Node(string n)
{
  name = n;
}

Node::Node()
{
  name = "";
}

Node::Node(const Node &obj)
{
  name = obj.getName();
}
void Node::addToOut(Node it)
{
  out.push_back(it);
}

void Node::addToIn(Node it)
{
  in.push_back(it);
}
int Node::getOutNum() const //Member functions that do not modify
			    //the class instance should be declared
			    //as const 
{
  return out.size();
}

int Node::getInNum() const
{
  return in.size();
}

string Node::getName() const
{
  return name;
}



