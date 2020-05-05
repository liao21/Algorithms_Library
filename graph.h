#ifndef graph_h
#define graph_h graph_h

typedef struct data_item_tag{
    int data1;
    int data2;
    int data3;
} data_item;

typedef struct graph_node_tag{
    // data
    data_item* data_item;

    int num_edges;

    // list of adjacencies
    struct graph_node_tag** edges;
} graph_node;

typedef struct graph_tag{
    // nodes
    int num_nodes;
    graph_node** nodes;
} graph;

graph* make_graph();
data_item* make_data_item(int data1, int data2, int data3);
void free_graph(graph* g);
void free_node(graph_node* node);

#endif
