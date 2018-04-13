#ifndef EDGE_H
#define EDGE_H

#include <string>
#include <vector>

class Edge{
public:

Edge();

Edge(std::string v1, std::string v2);

std::vector<std::string> & getEdge() const;

void setEdge(std::string v1, std::string v2);

void setV1(std::string v1);

void setV2(std::string v2);

std::string toString();

private:
std::string v1;
std::string v2;

};

#endif
