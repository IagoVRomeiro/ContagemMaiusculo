#include <stdio.h>
#include <string.h>

int main() {
  char palavra[100];
  do {
    int contador = 0;
    scanf(" %[^\n]", palavra);

    if (strcmp(palavra, "FIM") != 0) {
      for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z') {
          contador++;
        }
      }
      printf("%d\n", contador);
    }
  } while (strcmp(palavra, "FIM") != 0);

  return 0;
}
