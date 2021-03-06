#ifndef ALGORITHMS_H_
#define ALGORITHMS_H_

class Graph;

void displayGraphMatrix(Graph *graph);
int mstPrim(Graph *graph);
int mstKruscal(Graph *graph);
int spDijkstra(Graph *graph, int start, int end);
int spBellman(Graph *graph, int start, int end);

#endif /* ALGORITHMS_H_ */
