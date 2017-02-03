///sieves algorithm to generate a array full of prime numbers
#include<stdio.h>
#include<math.h>
int N = 5000, status[5001];
int main() {
int i, j, sqrtN;
for( i = 2; i <= N; i++ ) status[i] = 0;
//sqrtN = int( sqrt((double) N )); // have to check primes up to (sqrt(N))
   for( i = 3; i <= sqrtN; i += 2 ) {
            if( status[i] == 0 ) {
                           // so, i is a prime, so, discard all the multiples
                                       // j = i * i, because it’s the first number to be colored
for( j = i * i; j <= N; j += i + i )status[j] = 1; // status of the multiple is 1
}
}
// print the primes
printf("2 ");
for( i = 3; i <= N; i += 2 ) {


if( status[i] == 0 ) printf("%d ", i);
}
return 0;
}

