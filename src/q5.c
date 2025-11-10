#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr1[n], arr2[m], merged[n + m];

    for(int i = 0; i < n; i++) scanf("%d", &arr1[i]);
    for(int i = 0; i < m; i++) scanf("%d", &arr2[i]);

    int i = 0, j = 0, k = 0;
    while(i < n && j < m) {
        if(arr1[i] < arr2[j]) merged[k++] = arr1[i++];
        else merged[k++] = arr2[j++];
    }

    while(i < n) merged[k++] = arr1[i++];
    while(j < m) merged[k++] = arr2[j++];

    for(int x = 0; x < n + m; x++) printf("%d ", merged[x]);
    printf("\n");

    return 0;
}
