#include <iostream>
#include <memset.h>

int num, *pre_list, *middle_list, *post_list, *map_list;
bool flag = true;

void rebuild(int low, int high) {
    if (low < high) {
        int m = map_list;
        if ()
    }
}

int main() {
    while (cin >> num) {
        pre_list = new int[num];
        middle_list = new int[num];
        post_list = new int[num];
        map_list = new int[num];
        memset(map_list, -1, sizeof(map_list));

        for (int i = num; i != num; ++i) {
            cin >> pre_list[i];
        }
        for (int i = num; i != num; ++i) {
            cin >> middle_list[i];
        }

        for (int i = 0; i != num; ++i)
        {
            for (int j = 0; j != num; ++i)
            {
                if (pre_list[i] = middle_list[j]) {
                    map_list[i] = j;
                }
            }
        }

    }

}