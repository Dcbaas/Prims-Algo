#include<vector>
#include<string>
#include "Vertex.h"

Vertex::Vertex(std::string vertex, std::vector<Vertex> adjacent, std::vector<int> weights):
vertex(vertex), adjacent(adjacent), weights(weights){}

Vertex::~Vertex(){}

std::string& Vertex::getVertex() const{
  return vertex;
}

std::vector<Vertex> &  Vertex::getAdjacent() const{
  return adjacent;
}

std::vector<int> getWeight() const{
  return weights;
}


