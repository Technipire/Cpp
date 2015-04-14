#ifndef NODE_H
#define NODE_H

class Node
{
private:
  std::string name;
  std::vector<Node> out;
  std::vector<Node> in;
public:
  Node(std::string n);
  Node();
  Node(const Node &obj);
  void addToOut(Node it);
  void addToIn(Node it);
  int getOutNum() const;
  int getInNum() const;
  std::string getName() const;
  
};
#endif