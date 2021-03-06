#include <stdio.h>
#include <stdlib.h>

typedef struct move {
    int x_from, y_from, x_to, y_to;
} Move;

typedef struct node {
    Move *data;
    struct node *next;
} Node;

typedef struct stack {
    Node *head;
} Stack;

Stack* create_stack() {
    Stack* out = NULL;
    out = malloc(sizeof(Stack));
    out->head = NULL;
    return out;
}

void push(Stack *s, Move* data) {
    Node *tmp = malloc(sizeof(Node));
    tmp->next = s->head;
    tmp->data = data;
    s->head = tmp;
}

Move pop(Stack *s) {
    Move d;
    d.x_from = ((s->head)->data)->x_from;
    d.y_from = ((s->head)->data)->y_from;
    d.x_to = ((s->head)->data)->x_to;
    d.y_to = ((s->head)->data)->y_to;

    free((s->head)->data);
    Node *tmp = s->head;
    s->head = (s->head)->next;
    free(tmp);
    return d;
}

int check_empty(Stack *s) {
    return s->head == NULL;
}

void delete_stack(Stack *s) {
    while (s->head) {
        free((s->head)->data);
        Node* tmp = s->head;
        s->head = (s->head)->next;
        free(tmp);
    }
    free(s->head);
    free(s);
}