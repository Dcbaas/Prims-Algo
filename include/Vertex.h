#ifndef VERTEX_H
#define VERTEX_H

#include <string>
#include <vector>

class Vertex{
public:
Vertex(std::string vertex, std::vector<Vertex> adjacent, std::vector<int> weights);

~Vertex();

std::string & getVertex() const;

std::vector <Vertex> & getAdjacent() const;

std::vector<int> & getWeights() const;

private:

std::string vertex;

std::vector<Vertex> adjacent;

std::vector<int> weights; 
};

#endif
