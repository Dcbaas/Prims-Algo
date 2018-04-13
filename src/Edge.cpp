#include <string>
#include <vector>
#include "Edge.h"

Edge::Edge(){}

Edge::Edge(std::string v1, std::string v2):v1(v1), v2(v2){}

std::vector<std::string> & Edge::getEdge() const{
	std::vector<std::string> edge;
	edge.push_back(v1);
	edge.push_back(v2);
	edge.shrink_to_fit();
	
	return edge;
}

void Edge::setEdge(std::string v1, std::string v2){
  this->v1 = v1;
  this->v2 = v2;
}

void Edge::setV1(std::string v1){
	this->v1 = v1;
}

void Edge::setV2(std::string v2){
	this->v2 = v2;
}

std::string Edge::toString(){
	std::string returnStr{""+v1 + ", " + v2};
	return returnStr;
}
