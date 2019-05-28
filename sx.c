#include "stdio.h"


int main(int argc, char* argv[]){

    int y, m, d, md[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    scanf("%d%d%d", &y, &m, &d);

    if (y % 4 == 0 && y % 100 != 0) {
        md[1] = 29;
    } else if (y % 400 == 0) {
        md[1] = 29;
    } else {
        md[1] = 28;
    }

    m--;
    for (int i=0; i<m; i++) {
        d += md[i];
    }

    printf("%d\n", d);

    return 0;
}
