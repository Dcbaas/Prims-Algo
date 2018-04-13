#include<vector>
#include<string>
#include "Vertex.h"

Vertex::Vertex(std::string vertex, std::vector<std::string> adjacent, std::vector<int> weights):
vertex(vertex), adjacent(adjacent), w(weights){}

std::string & Vertex::getVertex(){
  return this->vertex;
}

std::vector<std::string> &  Vertex::getAdjacent(){
  return adjacent;
}

std::vector<int> &  Vertex::getWeights(){
  return w;
}


