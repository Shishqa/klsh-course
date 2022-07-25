
#include "../src/binary_tree.h"

enum {
    TEST_SUCCEEDED = 0,
    TEST_FAILED,
} TEST_RESULT;

int test_create() {
    /***************
           "a"
           /  \
         "b"  "c"
         /   /  \
       "d"  "e" "f"
             \
             "g"
    ****************/
    struct bt_node_t* root =
        bt_node_create(
            "a",
            bt_node_create(
                "b",
                bt_node_create("c", NULL, NULL),
                NULL
            ),
            bt_node_create(
                "d",
                bt_node_create(
                    "e",
                    NULL,
                    bt_node_create("f", NULL, NULL)
                ),
                bt_node_create("g", NULL, NULL)
            )
        );

    bt_node_destroy(root);
    return TEST_SUCCEEDED;
}

int main() {
    int num_failed = 0;
    num_failed += test_create();
    printf("test: %s\n", (num_failed != 0) ? "FAIL" : "OK");
    return 0;
}
