#ifndef VERTEX_H
#define VERTEX_H

#include <string>
#include <vector>

class Vertex{
public:
Vertex(std::string vertex, std::vector<Vertex> adjacent, std::vector<int> weights);

std::string & getVertex();

std::vector <Vertex> & getAdjacent();

std::vector<int> & getWeights();

private:

std::string vertex;

std::vector<Vertex> adjacent;

std::vector<int> w; 
};

#endif
