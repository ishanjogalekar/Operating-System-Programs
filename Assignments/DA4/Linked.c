#include <stdio.h>

#include <stdlib.h>
void recursivePart(int pages[]){
    int st, len, k, c, j;
    printf("\nEnter the index of the starting block: ");
    scanf("%d", &st);
    printf("\nEnter the length: ");
    scanf("%d", &len);
    k = len;
    if (pages[st] == 0){
        for (j = st; j < (st + k); j++){
            if (pages[j] == 0){
                pages[j] = 1;
                printf("%d------>%d\n", j, pages[j]);
            }
            else {
                printf("\nThe block %d is already allocated", j);
                k++;
            }
        }
    }
    else
        printf("\nThe block %d is already allocated", st);
    printf("\nDo you want to enter more files?");
    printf("\n1 for Yes, Enter 0 for No: ");
    scanf("%d", &c);
    if (c==1)
        recursivePart(pages);
    else
        exit(0);
    return;
}
int main(){
    printf("\n19BCE2250 - Ishan Jogalkear");
    int pages[50], p, a;
    for (int i = 0; i < 50; i++)
        pages[i] = 0;
    printf("\nEnter the number of blocks already allocated: ");
    scanf("%d", &p);
    printf("\nEnter the blocks already allocated: ");
    for (int i = 0; i < p; i++){
        scanf("%d", &a);
        pages[a] = 1;
    }
    recursivePart(pages);
  
    return 0;
}