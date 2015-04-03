#ifndef EDGE_H
#define EDGE_H
#include "Node.h"

class Edge
{
private:
  Node *src, *dest;
  int weight;
public:
  Edge(Node &source, Node &destination);
  Edge(Node &source, Node &destination, int wgt);
  Node getSrcNode();
  Node getDestNode();
  std::string getSrcName();
  std::string getDestName();
  void updateSrc();
  void updateDest();
  void setWeight(int wgt);
  int getWeight();
  
};
#endif
