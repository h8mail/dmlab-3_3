#include <stdio.h>
#include <stdbool.h>

#define LENGTH 11

bool is_connected(int x, int y) {
    bool res = false;
    if ((x == 1 || x == 3 || x == 10) && 
        (y == 1 || y == 3 || y == 10)) {
        res = true;
    }
    else if ((x == 2 || x == 7 || x == 8 || x == 9)  && 
         (y == 2 || y == 7 || y == 8 || y == 9)) {
        res = true;
    }
    else if ((x == 4 || x == 5 || x == 6) && 
         (y == 4 || y == 5 || y == 6)) {
        res = true;
    }
    return res;
}

void start_matrix(bool matrix[LENGTH][LENGTH]) {
    for (int i = 1; i < LENGTH; i++) {
        for (int j = 1; j < LENGTH; j++) {
            matrix[i][j] = is_connected(i, j);

        }
    }
}

void print_matrix(bool matrix[LENGTH][LENGTH]) {
    for (int i = 1; i < LENGTH; i++) {
        for (int j = 1; j < LENGTH; j++) {
        printf("%d ", matrix[i][j]);    
        } 
        printf("\n");    
    }
}

int main() {

    bool relation_matrix[LENGTH][LENGTH];
    start_matrix(relation_matrix);
    print_matrix(relation_matrix);

}
