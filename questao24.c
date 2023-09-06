#include <stdio.h>
#include <math.h>

int main() {
    for (int ctA = 1; ctA <= 500; ctA++) {
        for (int ctO = 1; ctO <= 500; ctO++) {
            for (int hip = 1; hip <= 500; hip++) {
                if ((ctA * ctA + ctO * ctO) == (hip * hip) && ctA < ctO) {
                    printf("ctA: %d, ctO: %d, hip: %d\n", ctA, ctO, hip);
                }
            }
        }
    }
    return 0;
}
