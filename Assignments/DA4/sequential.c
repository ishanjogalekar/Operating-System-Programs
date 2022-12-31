
#include <stdio.h>

#include <stdlib.h>

void recurse(int files[]){
    int flag = 0, startBlock, len, j, k, ch;
    printf("\nEnter the starting block : ");
    scanf("%d", &startBlock);
    printf("\nEnter the length of files: ");
    scanf("%d", &len);
    for (j=startBlock; j<(startBlock+len); j++){
        if (files[j] == 0)
            flag++;
    }
    if(len == flag){
        for (int k=startBlock; k<(startBlock+len); k++){
            if (files[k] == 0){
                files[k] = 1;
                printf("%d\t%d\n", k, files[k]);
            }
        }
        if (k != (startBlock+len-1))
            printf("\nThe file is allocated to the disk");
    }
    else
        printf("\nThe file is not allocated to the disk");

    printf("\nEnter more files?\n");
    printf("\n1 for YES, 0 for NO: ");
    scanf("%d", &ch);
    if (ch == 1)
        recurse(files);
    else
        exit(0);
    return;
}

int main()
{
    printf("\n19BCE2250 - Ishan Jogalekar");
    int files[50];
    for(int i=0;i<50;i++)
     files[i]=0;
    printf("\nFiles Allocated are :");
    recurse(files);
    return 0;
}