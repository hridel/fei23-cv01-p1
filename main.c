#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;
    int randomNumber, zeroCount = 0, positiveCount = 0, negativeCount = 0, from1To100Count = 0, from101To1000Count = 0;

    srand(time(NULL));
    for (i = 0; i < 1000; i++) {
        randomNumber = rand() % 2001 - 1000;
    //    printf("randomNumber %d\n", randomNumber);
        if (randomNumber == 0) {
            zeroCount++;
        } else {
            if (randomNumber > 0) {
                positiveCount++;
            } else {
                negativeCount++;
            }
        }

        if (randomNumber > 0 && randomNumber <= 100) {
            from1To100Count++;
        }

        if (randomNumber > 100 && randomNumber <= 1000) {
            from101To1000Count++;
        }
    }

    printf("počet 0: %d\n", zeroCount);
    printf("počet kladných: %d\n", positiveCount);
    printf("počet záporných: %d\n", negativeCount);
    printf("počet od 1 do 100: %d\n", from1To100Count);
    printf("počet od 101 do 1000: %d\n", from101To1000Count);

    printf("-------------------------------\n");
    printf("kontrolní součet %d\n", positiveCount + negativeCount + zeroCount);

    return 0;
}
