#include <math.h>
#include <stdlib.h>

void aMerger(int q[], int h, int f, int s);

int *merge(int a[], int x, int y) {
    if ((y - 1) - x == 0) {
        return 0;
    } else {
        int b = ceil((y - 1) / 2);
        merge(a, x, b);
        merge(a, b, y);
        aMerger(a, x, b, y - 1);
    }
    
}

void aMerger(int q[], int h, int f, int s) {
    int d = h;
    int e = f;
    int i = 0;
    int q1[s - h + 1];
//    int q2[s - f + 1];
    while ((d != e && (e + 1) != s) && i < (s - h + 1)) {
        if ( q[d] >= q[e + 1] ) {
            //TODO implement merging from q[d...f]
            q1[i] = q[d];
            d++;
        } else {
            //TODO implement merging from q[f+1...s]
            q1[i] = q[e + 1];
            e++;
        }
        i++;
    }
    while (i < s - h + 1) {
        q[i] = q1[i];
        i++;
    }
    free(q1);
}