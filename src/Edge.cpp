#include <string>
#include "Edge.h"

Edge::Edge(std::string v1, std::string v2){
  edge = new std::string[2];
 
  edge[0] = v1;
  edge[1] = v2;
}

std::string & Edge::getEdge() const{
  return *edge;
}

void Edge::setEdge(std::string v1, std::string v2){
  edge[0] = v1;
  edge[1] = v2;
}
