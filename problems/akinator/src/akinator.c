#include <stdio.h>

#include "../../binary_tree/src/binary_tree.h"

int main() {

    struct bt_node_t* root =
        bt_node_create(
            "есть усы",
            bt_node_create("Садовский", NULL, NULL),
            bt_node_create("не Садовский", NULL, NULL)
        );

    bt_node_destroy(root);
    return 0;
}
