#include<stdio.h>
int np,nf,i,j,k=0,page[10],frame[10],fpos=0,flag=0,pageFault=0;
void main(){
    printf("Enter the number of pages : ");
    scanf("%d",&np);
    printf("Enter the pages\n");
    for(i=0;i<np;i++)
    scanf("%d",&page[i]);
    printf("Enter the number of frames : ");
    scanf("%d",&nf);
    printf("\nPage \t Frame\n");
    for(i=0;i<nf;i++)
    frame[i]=-1;
    for(i=0;i<np;i++){
        flag=0;
        for(j=0;j<nf;j++){
            if(frame[j]==page[i]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            frame[fpos]=page[i];
            fpos=(fpos+1)%nf;
        }
        if(flag==1){
            printf("  Page Hit  ");
        }
        else{
            for(j=0;j<nf;j++){
                printf("%d\t",frame[j]);
            }
            printf("\n");
            pageFault++;
        }
    }
    printf("\nNumber of page faults :  %d ",pageFault);
}   
