#include "ALGraph.h"

ALGraph::ALGraph(int a_numV) : numV(a_numV), numE(0), adjList(nullptr)
{
    adjList = new Ch5DList[numV];
}
ALGraph::~ALGraph() 
{
    delete[] adjList;
}

void ALGraph::AddEdge(int fromv, int tov){
    adjList[fromv].LInsert(tov);
    adjList[tov].LInsert(fromv);
    ++numE;
    
}
void ALGraph::ShowGraphEdgeInfo()
{
    int i;
    int data;
    for(i = 0; i < numV; ++i) {
        printf("%c: 와 연결된 점 : ", i + 65);
        if(adjList[i].LFirst(data)) {
            printf("%c ",data + 65);
            while(adjList[i].LNext(data))
                printf("%c ",data + 65);            
        }
        printf("\n");
    }
}
