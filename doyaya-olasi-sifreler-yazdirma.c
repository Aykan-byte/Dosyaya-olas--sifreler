#include <stdio.h>

int main() {
    FILE *dosya;
    char sifre[6];  // 5 karakter sifre + '\0' icin 6 karakter uzunlugunda

    dosya = fopen("C:\\Users\\aykan\\Desktop\\sifre.txt", "w");  // Dosyayi yazma modunda aciyoruz
    if (dosya == NULL) {
        printf("Dosya acilmadi!\n");
        return 1;
    }

    // 5 karakterli sifre için 5 dongu
    for (char i = 'a'; i <= 'z'; i++) {
        for (char j = 'a'; j <= 'z'; j++) {
            for (char k = 'a'; k <= 'z'; k++) {
                for (char l = 'a'; l <= 'z'; l++) {
                    for (char m = 'a'; m <= 'z'; m++) {
                        sifre[0] = i;
                        sifre[1] = j;
                        sifre[2] = k;
                        sifre[3] = l;
                        sifre[4] = m;
                        sifre[5] = '\0';  // Null terminator

                        fprintf(dosya, "%s\n", sifre);  // sifreyi dosyaya yaz
                    }
                }
            }
        }
    }

    fclose(dosya);  // Dosyayi kapatayoruz
    printf("Tum olasi sifreler sifre.txt dosyasina kaydedildi.\n");

    return 0;
}