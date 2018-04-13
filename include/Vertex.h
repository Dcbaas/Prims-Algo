#ifndef VERTEX_H
#define VERTEX_H

#include <string>
#include <vector>

class Vertex{

Vertex(std::string vertex, std::vector<*Vertex> adjacent, std::vector<int> weights);

~Vertex();

std::string getVertex() const;

std::vector <*Vetex> getAdjacent() const;

std::vector<int> getWeights() const;

private:

std::string vetex;

std::vector<*Vertex> adjacent;

std::vector<int> weights; 
};

#endif
