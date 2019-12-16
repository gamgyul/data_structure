#include "ALGraph.h"

int main()
{
    ALGraph graph(6);
    graph.AddEdge(A,B);
    graph.AddEdge(A,C);
    graph.AddEdge(A,D);
    graph.AddEdge(C,E);
    graph.ShowGraphEdgeInfo();

    return 0;

}