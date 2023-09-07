#include<stdio.h>
int mutex=1,full=0,empty=3,item=0,choice;
int wait(int s){
    return (--s);
}
int signal(int s){
    return (++s);
}
void consumer(){
    mutex=wait(mutex);
    full=wait(full);
    empty=signal(empty);
    printf("Item %d is consumed ",item);
    item--;
    mutex=signal(mutex);
   
}
void producer(){
    mutex=wait(mutex);
    full=signal(full);
    empty=wait(empty);
    item++;
    printf("Item %d is produced\n",item);
    mutex=signal(mutex);
}
int main(){
    printf("1.produce     2. Consume\n");
    do{
        printf("Enter choice :  ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            if((mutex==1)&&(empty!=0))
            producer();
            else
            printf("\nBuffer is full\n");
            break;
            case 2:
            if((mutex==1)&&(full!=0))
            consumer();
            else
            printf("\nBuffer is empty\n");
            break;
            case 3:
            return 0;
        }
    }while(choice!=3);
}
