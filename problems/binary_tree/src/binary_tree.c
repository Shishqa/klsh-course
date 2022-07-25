#include <stdlib.h>

#include "binary_tree.h"

struct bt_node_t* bt_node_create(bt_value_t value,
                                 struct bt_node_t* left,
                                 struct bt_node_t* right) {
    // TODO:
    // 1. выделить память под структуру bt_node_t
    //    размер структуры в байтах можно выяснить с помощью sizeof
    // 2. заполнить поля структуры
    // 3. вернуть указатель на структуру
    return NULL;
}

void bt_node_destroy(struct bt_node_t* node) {
    // TODO:
    // 1. удалить сыновей вершины
    // 2. удалить саму вершину
}

void bt_node_dump_graphviz(struct bt_node_t* node, FILE* file) {
    // для описания вершины используй формат
    //   node_%pointer [label=\" value \"];
    //
    // для описания ребра используй формат
    //   node_%pointer_1 -> node_%pointer_2;
}

void bt_dump_graphviz(struct bt_node_t* root, FILE* file) {
    fprintf(file, "digraph G {\n");
    bt_node_dump_graphviz(root, file);
    fprintf(file, "}");
}
