#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int val;
    struct node *next;
}node_t;

void push(node_t **head, int val){
    node_t *new_node;
    new_node = malloc(sizeof(node_t));
    new_node->val = val;
    new_node->next = *head;
    *head = new_node;
}

void print_list(node_t *head){

}

int main(int narg, char *argv){
    node_t *head = NULL;  // the list starts empty
    int n, i, val;

    printf("Insert the number of elements you want to add to the list:\n");
    scanf("%d\n", &i);

    for(i = 0; i < n; i++){
        scanf("%d", &val);
    }

    return EXIT_SUCCESS;
}