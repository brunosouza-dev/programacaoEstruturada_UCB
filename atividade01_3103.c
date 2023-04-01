#include <stdio.h>

int main() {
  int i, n, sum = 0, biggest = 0, smallest = 9999, pairs = 0, pairsSum = 0, oddSum = 0, over20Sum = 0, over20 = 0; 
  float peerAverage = 0, over20Average = 0;

  for (i = 0; i < 10; i++) {
    printf("Enter a number: ");
    scanf("%d", &n);

    sum += n;

    if (n > biggest) {
      biggest = n;
    }

    if (n < smallest) {
      smallest = n;
    }

    if (n % 2 == 0) {
      pairsSum += n;
      pairs ++;
    }

    if (n % 2 == 1) {
      oddSum += n;
    }

    if (n > 20) {
      over20Sum += n;
      over20 ++;
    }
  }

  peerAverage = (pairsSum / pairs);
  over20Average = (over20Sum / over20);

  printf("\nSum: %d. Biggest: %d. Smallest: %d.", sum, biggest, smallest);
  printf("\nPeer Average: %.2f. Amount of Pairs: %d", peerAverage, pairs);
  printf("\nOdd Sum: %d", oddSum);
  printf("\nAverage of Over 20: %.2f", over20Average);

  return 0;
}