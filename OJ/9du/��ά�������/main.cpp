#include <iostream>
#include <cstdio>
using namespace std;

int x, y, target, matrix[1000][1000];
bool find() {
    int i = 0;
    int j = y - 1;
    bool found = false;
    while (i != x && j != -1) {
        if (target < matrix[i][j]) {
            --j;
        } else if (target > matrix[i][j]) {
            ++i;
        } else {
            found = true;
            break;
        }
    }
    return found;
}


int main() {
    while (scanf("%d %d", &x, &y) != EOF) {
        scanf("%d", &target);
        for (int i = 0; i != x; ++i) {
            for (int j = 0; j != y; ++j) {
                scanf("%d", &matrix[i][j]);
            }
        }
        if (find()) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}
