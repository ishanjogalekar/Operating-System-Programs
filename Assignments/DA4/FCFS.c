#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>  
#include <pthread.h> 


int main(int argc, char const *argv[])
{
    printf("\n19BCE2250 - Ishan Jogalekar");
    int range, queue_size, cur_pos, cur_seek_time, total_seek_time = 0;
    printf("\nEnter the size of disk : ");
    scanf("%d", &range);
    printf("\nEnter the number requests : ");
    scanf("%d", &queue_size);

    int req_queue[queue_size];
    printf("\nEnter the requests : ");
    for (int i = 0; i < queue_size; i++)
    {
        scanf("%d ", &req_queue[i]);
    }
    int hold;
    scanf("%d", &hold);
    printf("\nEnter the  head position : ");
    scanf("%d", &cur_pos);
    for (int i = 0; i < queue_size; i++)
    {
        cur_seek_time = abs(req_queue[i] - cur_pos);
        printf("\nDisk head moves from %d to %d with seek time %d", cur_pos, req_queue[i], cur_seek_time);
        cur_pos = req_queue[i];
        total_seek_time += cur_seek_time;
    }
    printf("\nTotal Seek Time is : %d", total_seek_time);
    return 0;
}