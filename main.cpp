#include <iostream>
#include <string>
#include <vector>
#include "Node.h"
#include "Edge.h"

using namespace std;

int main()
{ 
  /*
  Node wheat("wheat");
  Node corn("corn");
  Node soy("soy");
  Node carrot("carrot");
  Node pumpkin("pumpkin");
  
  Edge e(corn, wheat);
  Edge e1(soy, wheat); 
  Edge e2(carrot, wheat);
  Edge e3(pumpkin, wheat);
  
  cout << wheat.getInNum() << endl;
  cout << wheat.getName() << endl;
  */
  vector<Node> node_vec;
  vector<Edge> edge_vec;
  string input;
  cout << "1: Adding a new node;\n2: Add a new edge;\n" <<
   "3: Print Out number of node of your input.\n4: Print #nodes;\n" 
   << "5: Print #edges" << endl;
 
  while(cin >> input)
  {

      if (input == "1")
      {
	string name = "";
	cout << "Please enter the node name: " << endl;
	cin >> name;
	if(name == "")
	{
	  cout << "Nothing entered. Enter again." << endl;
	}
	else
	{
	  Node n(name);
	  node_vec.push_back(n);
	  cout << "New node " << name << " added." << endl;
	  
	}
      }
      
      else if (input == "2")
      {
	string source, destination;
	cout << "Please enter source name: " << endl;
	cin >> source;
	cout << "Please enter destination name: " << endl;
	cin >> destination;
	bool src_found = false;
	bool dest_found = false;
	Node src;
	Node dest;
	for (auto node : node_vec)
	{
	  if (node.getName() == source)
	  {
	   
	    src_found = true;
	    //src = Node(node);
	    src = Node(node);
	  }
	  else if(node.getName() == destination)
	  {
	    dest_found = true;  
	    //dest = Node(node);
	    dest = Node(node);
	  }
	}
	if (!src_found)
	  cout << "Source name is not found." << endl;
	if(!dest_found)
	  cout << "destination name is not found." << endl;
	if(src_found && dest_found)
	{
	  Edge e(src, dest);
	   cout << " im here " << endl;
	  edge_vec.push_back(e);
	  cout << "New edge added." << endl;
	}
      }
      
      else if (input == "3")
      {
	string name = "";
	cout << "Please enter the node name: " << endl;
	cin >> name;
	if (name == "" )
	{
	  cout <<"Nothing entered. Enter again." << endl;
	}
	else
	{
	  bool found = false;
	  for (auto node : node_vec)
	  {
	    if (node.getName() == name)
	    {
	      cout << "The out number of node " << name << " is "
	      << node.getOutNum() << endl;
	      found = true;
	    }
	  }
	  if (!found)
	    cout << name << " is not found in the nodes." << endl;
	}
      }
      else if (input == "4")
      {
	cout << "#nodes = " << node_vec.size() << endl;
      }
      else if (input == "5")
      {
	cout << "#edges = " << edge_vec.size() << endl;
      }
      cout << endl;
      cout << "1: Adding a new node;\n2: Add a new edge;\n" <<
   "3: Print Out number of node of your input.\n4: Print #nodes;\n" 
   << "5: Print #edges" << endl;
    }
    
 
  }
