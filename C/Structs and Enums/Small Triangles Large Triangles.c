#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

void sort_by_area(triangle* tr, int n) {
    int *arr = malloc(n * sizeof(float));
    for(int i=0;i<n;i++){
		    float c = ((tr[i].a + tr[i].b + tr[i].c)/2.0);
		    arr[i] = c*(c-tr[i].a)*(c-tr[i].b)*(c-tr[i].c);
    }
    for (int i=0;i<n; i++){
      for(int j=0; j<n-i-1; j++){
        if(arr[j]>arr[j+1]){
          int tmp = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = tmp;

          tmp = tr[j].a;
          tr[j].a = tr[j + 1].a;
          tr[j + 1].a = tmp;

          tmp = tr[j].b;
          tr[j].b = tr[j + 1].b;
          tr[j + 1].b = tmp;

          tmp = tr[j].c;
          tr[j].c = tr[j + 1].c;
          tr[j + 1].c = tmp;
        }
      }
    }

}


int main(){
			int n;
			scanf("%d", &n);
			triangle *tr = malloc(n * sizeof(triangle));
			for (int i = 0; i < n; i++) {
				scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
			}
			sort_by_area(tr, n);
			for (int i = 0; i < n; i++) {
				printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
			}
			return 0;
}
