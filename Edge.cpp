#include <iostream>
#include <string>
#include <vector>
#include "Node.h"
#include "Edge.h"

using namespace std;

Edge::Edge(Node &source, Node &destination)
{
  src = &source;
  dest = &destination;
  weight = 0;
  updateSrc();
  updateDest();
}

Edge::Edge(Node &source, Node &destination, int wgt)
{
  src = &source;
  dest = &destination;
  weight = wgt;
  updateSrc();
  updateDest();
}

Node Edge::getSrcNode()
{
  return *src;
}

Node Edge::getDestNode()
{
  return *dest;
}

string Edge::getSrcName()
{
  return src->getName();
}

string Edge::getDestName()
{
  return dest->getName();
}

void Edge::updateSrc()
{
  src->addToOut(this->getDestNode());
}

void Edge::updateDest()
{
  dest->addToIn(this->getSrcNode());
}

void Edge::setWeight(int wgt)
{
  weight = wgt;
}

int Edge::getWeight()
{
  return weight;
}
