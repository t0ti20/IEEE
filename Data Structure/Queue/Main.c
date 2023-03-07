#include "./Queue.h"
queue_t queue;
void print(storage_type element)
{
     printf("%d\n",element);
}
int main(void)
{
     Queue_Initialization(&queue);
     for(u8 counter=0;counter<10;counter++)Queue_Enqueue(&queue,counter);
     Queue_Traverse(&queue,print);
     u8 x;
     for(u8 counter=0;counter<3;counter++)Queue_Dequeue(&queue,&x);
     Queue_Print(&queue);
     Queue_Enqueue(&queue,10);
     Queue_Enqueue(&queue,11);
     Queue_Print(&queue);
     return 0;
}