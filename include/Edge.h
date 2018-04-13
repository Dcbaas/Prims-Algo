#ifndef EDGE_H
#define EDGE_H

#include <string>

class Edge{
public:

Edge(std::string v1, std::string v2);

std::string & getEdge() const;

void setEdge(std::string v1, std::string v2);

private:
std::string* edge;

};

#endif
