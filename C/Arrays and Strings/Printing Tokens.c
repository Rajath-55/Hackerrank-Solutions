#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    char *ptr;

    for (char *ch=s; *ch != NULL; ch++){
      if (*ch == ' ')
      *ch = '\n';
    }
    printf("%s", s);

    return 0;
}
