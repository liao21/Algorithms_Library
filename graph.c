#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

int main(){
    printf("Hello world\n");

    data_item data_item1 = make_data_item(1,2,3);
    graph* graph1 = make_graph();


}

graph* make_graph(){
    graph* graph = malloc(sizeof(graph));
    graph->num_nodes = 0;
    return graph;
}

//     //TODO
// void add_node(graph** graph_ptr, data data, graph_node** edges){
//     graph* graph = graph_ptr*;
//
//     graph_node* new_node = malloc(sizeof(graph_node));
//
//     graph->num_nodes++;
//     graph->nodes[graph->num_nodes] =
//
//     // add the data
//     current_node
// }

data_item* make_data_item(int data1, int data2, int data3){
    ret_data = malloc(sizeof(data_item));
    ret_data.data1 = data1;
    ret_data.data2 = data2;
    ret_data.data3 = data3;
    return ret_data;
}

void free_graph(graph* graph){
    //free the data items in each node

    //free the nodes in the graph

    //free the graph
}
