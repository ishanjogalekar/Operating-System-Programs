
#include <stdio.h>
#include <stdlib.h>
int files[50], indexBlock[50], indBlock, n;
void recurse1();
void recurse2();

void recurse1(){
    printf("\nEnter the index block: ");
    scanf("%d", &indBlock);
    if (files[indBlock] != 1){
        printf("\nEnter the number of blocks and the number of files needed for the index %d on the disk: ", indBlock);
        scanf("%d", &n);
    }
    else{
        printf("\n%d is already allocated", indBlock);
        recurse1();
    }
    recurse2();
}

void recurse2(){
    int ch;
    int flag = 0;
    for (int i=0; i<n; i++){
        scanf("%d", &indexBlock[i]);
        if (files[indexBlock[i]] == 0)
            flag++;
    }
    if (flag == n){
        for (int j=0; j<n; j++){
            files[indexBlock[j]] = 1;
        }
        printf("\nAllocated");
        printf("\nFile Indexed");
        for (int k=0; k<n; k++){
            printf("\n%d ------> %d : %d", indBlock, indexBlock[k], files[indexBlock[k]]);
        }
    }
    else{
        printf("\nFile in the index is already allocated");
        printf("\nEnter another indexed file");
        recurse2();
    }
    printf("\nDo you want to enter more files?");
    printf("\n1 for Yes, Enter 0 for No: ");
    scanf("%d", &ch);
    if (ch == 1)
        recurse1();
    else
        exit(0);
    return;
}

int main()
{
    printf("\n19BCE2250 - Ishan Jogalekar");
    for(int i=0;i<50;i++)
        files[i]=0;
    printf("\nFiles Allocated are :");
    recurse1();
    return 0;
}