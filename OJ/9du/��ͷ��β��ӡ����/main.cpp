#include <iostream>
#include <cstdio>
using namespace std;
struct Listnode {
    int val;
    Listnode* next;
    Listnode(int x) : val(x), next(NULL) {}
};

void output(Listnode* head) {
    if (head->next != NULL) {
        output(head->next);
    }
    printf("%d\n", head->val);
}

int main() {
    int input;
    Listnode head(-1);
    Listnode* now = &head;
    while (scanf("%d", &input)) {
        if (input != -1) {
            Listnode* node = new Listnode(input);
            now->next = node;
            now = node;
        } else {
            break;
        }
    }
    output(head.next);
}