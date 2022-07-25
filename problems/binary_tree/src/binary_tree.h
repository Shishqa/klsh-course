#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <stdio.h>

typedef char* bt_value_t;

struct bt_node_t {
    bt_value_t value;
    struct bt_node_t* left;
    struct bt_node_t* right;
};

struct bt_node_t* bt_node_create(bt_value_t value,
                                 struct bt_node_t* left,
                                 struct bt_node_t* right);

void bt_node_destroy(struct bt_node_t* node);

void bt_dump_graphviz(struct bt_node_t* root, FILE* dest);

#endif // BINARY_TREE_H
