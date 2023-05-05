#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>




int main() {
    FILE *fp =fopen("a.in", "rb");
    int T, j;
    char arr[100];
    fread(&T, sizeof(T), 1, fp);
    //scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        fread(arr, sizeof(arr), 1, fp);
        //scanf("%s", &arr);
        j=0;
        while (arr[j] != 'EOF')
        {
            if(arr[j] == 'D')
                break;
            j++;
        }
        printf("%d\n", j);
    }

    fclose(fp);
}