#ifndef _AL_GRAPH_H_
#define _AL_GRAPH_H_

#include <iostream>
#include "dlist.h"

enum {A, B, C, D, E, F, G, H, I, J};

class ALGraph
{
private:
    int numV;
    int numE;
    Ch5DList *adjList;
public:
    // ALGraph();
    ALGraph(int a_numV = 5);
    ~ALGraph();
    void AddEdge(int fromV, int toV);
    void ShowGraphEdgeInfo();

};


#endif //  _AL_GRAPH_H_