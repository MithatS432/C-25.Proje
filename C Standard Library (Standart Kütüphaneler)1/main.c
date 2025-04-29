#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main() {
    srand(time(NULL));
    char input[100];
    int digitSum = 0;
    int charCount = 0;

    printf("Bir metin giriniz: ");
    fgets(input, sizeof(input), stdin);

    // '\n' varsa kald�r
    input[strcspn(input, "\n")] = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        if (isdigit(input[i])) {
            digitSum += input[i] - '0';  // say�sal de�eri topla
        }
        if (isalpha(input[i])) {
            charCount++;
        }
    }

    printf("Girilen metindeki rakamlarin toplami: %d\n", digitSum);
    printf("Girilen metindeki harf sayisi: %d\n", charCount);

    // Rastgele bir say� olu�tur
    int randomNumber = rand() % 100; // 0-99 aras�
    printf("Rastgele sayi: %d, Karesi: %.2f\n", randomNumber, pow(randomNumber, 2));

    return 0;
}
