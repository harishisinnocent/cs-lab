#include <stdio.h>

struct Element {
    int row, col, value;
};

void addSparseMatrices(struct Element m1[], struct Element m2[], struct Element result[], int size1, int size2) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (m1[i].row < m2[j].row || (m1[i].row == m2[j].row && m1[i].col < m2[j].col)) result[k++] = m1[i++];
        else if (m1[i].row > m2[j].row || (m1[i].row == m2[j].row && m1[i].col > m2[j].col)) result[k++] = m2[j++];
        else { result[k] = m1[i]; result[k++].value += m2[j++].value; i++; }
    }
    while (i < size1) result[k++] = m1[i++];
    while (j < size2) result[k++] = m2[j++];
}

int main() {
    struct Element m1[] = {{0, 0, 5}, {1, 2, 3}, {2, 1, 4}};
    struct Element m2[] = {{0, 0, 1}, {1, 2, 2}, {2, 1, 5}};
    struct Element result[6];
    addSparseMatrices(m1, m2, result, 3, 3);
    for (int i = 0; i < 6; i++) printf("Row: %d Col: %d Value: %d\n", result[i].row, result[i].col, result[i].value);
    return 0;
}
