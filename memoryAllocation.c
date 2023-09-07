#include<stdio.h>
int record[100],block[100],m[100],r[100],i,j,k,flag=0,nm,nr,loc=0;
void first_fit(){
    for(i=0;i<nr;i++){
        flag=0;
        for(j=0;j<nm;j++){
            if(record[i] <= block[j]){
                block[j] = block[j]-record[i];
                printf("Record %dK fits in Block %dK    Remaining => %dK\n",record[i],m[j],block[j]);
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("Record %dK cannot be allocated \n",record[i]);
        }        
    }
}   
void best_fit(){
    for(i=0;i<nm;i++)
        block[i]=m[i];   
    for(i=0;i<nr;i++){
        loc=-1;
        for(j=0;j<nm;j++){
            if(record[i]<=block[j]){
                if(block[j] <= block[loc] || loc==-1){
                    loc = j;
                }
            }
        } 
        if(loc!=-1){
            block[loc]=block[loc]-record[i];
            printf("Record %dK fits in Block %dK    Remaining => %dK\n",record[i],m[loc],block[loc]);
        }    
        else
            printf("Record %dK cannot be allocated \n",record[i]);
    }
} 
void worst_fit(){
    for(i=0;i<nm;i++)
        block[i]=m[i];    
    for(i=0;i<nr;i++){
        loc=-1;
        for(j=0;j<nm;j++){
            if(block[j] >= record[i]){
                if(block[loc] <= block [j] || loc==-1){
                    loc=j;
                }
            }
        }
        if(loc!=-1){
            block[loc]=block[loc]-record[i];
            printf("Record %dK fits in Block %dK    Remaining => %dK\n",record[i],m[loc],block[loc]);
        }
        else
            printf("Record %dK cannot be allocated \n",record[i]);        
    }
}
void main(){
    printf("Enter the number of memory blocks :  ");
    scanf("%d",&nm);
    printf("Enter the memory blocks \n");
    for(i=0;i<nm;i++){
        scanf("%d",&m[i]);
    }
    printf("Enter the number of records : ");
    scanf("%d",&nr);
    printf("Enter the records\n");
    for(i=0;i<nr;i++)
        scanf("%d",&record[i]);
    for(i=0;i<nm;i++)
        block[i]=m[i];    
    printf("\n----------------First Fit--------------\n");
    first_fit();
    printf("\n----------------Best Fit--------------\n");
    best_fit();
    printf("\n----------------Worst Fit--------------\n");
    worst_fit();
}    
