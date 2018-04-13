#ifndef VERTEX_H
#define VERTEX_H

#include <string>
#include <vector>

class Vertex{
public:
Vertex(std::string vertex, std::vector<std::string> adjacent, std::vector<int> weights);

std::string & getVertex();

std::vector <std::string> & getAdjacent();

std::vector<int> & getWeights();

private:

std::string vertex;

std::vector<std::string> adjacent;

std::vector<int> w; 
};

#endif
