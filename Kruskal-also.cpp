// The main function to construct MST using Kruskal's algorithm

void KruskalMST(struct Graph* graph)
{
    int V = graph->V;
    struct Edge
        result[V];
    int e = 0;
    int i = 0; 
 

    qsort(graph->edge, graph->E, sizeof(graph->edge[0]),
        myComp);
 

    struct subset* subsets
        = (struct subset*)malloc(V * sizeof(struct subset));
 
    
    for (int v = 0; v < V; ++v) {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }
 
   
    while (e < V - 1 && i < graph->E) {
        
        struct Edge next_edge = graph->edge[i++];
 
        int x = find(subsets, next_edge.src);
        int y = find(subsets, next_edge.dest);
 
        if (x != y) {
            result[e++] = next_edge;
            Union(subsets, x, y);
        }
        
    }
 
    // print the contents of result[] to display the built MST
    printf(
        "Following are the edges in the constructed MST\n");
    int minimumCost = 0;
    for (i = 0; i < e; ++i)
    {
        printf("%d -- %d == %d\n", result[i].src,
            result[i].dest, result[i].weight);
        minimumCost += result[i].weight;
    }
    printf("Minimum Cost Spanning tree : %d",minimumCost);
    return;
}
