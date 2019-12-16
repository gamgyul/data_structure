#include "ALGraphDFS.h"

int main()
{
    ALGraph graph(6);
    graph.AddEdge(A,B);
    graph.AddEdge(A,C);
    graph.AddEdge(A,D);
    graph.AddEdge(C,E);
    graph.ShowGraphEdgeInfo();
    graph.DFShowGraphVertex(A); printf("\n");
    graph.DFShowGraphVertex(B); printf("\n");
    graph.DFShowGraphVertex(C); printf("\n");

    return 0;

}