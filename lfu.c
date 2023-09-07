#include<stdio.h>
void main(){
    int np,nf,page[100],frame[100],minFreqIndex=0,i,j,pf=0,freq[100],frameIndex,currentPage=0;
    printf("Enter the number of pages : ");
    scanf("%d",&np);
    printf("Enter the pages \n");
    for(i=0;i<np;i++)
      scanf("%d",&page[i]);
    
    printf("Enter the number of frames : ");
    scanf("%d",&nf);

    for(j=0;j<nf;j++){
        frame[j]=-1;
        freq[j]=0;
    }
    printf("------------frames----------\n");
    for(i=0;i<np;i++){
        currentPage=page[i];
        frameIndex=-1;
        for(j=0;j<nf;j++){
            if(currentPage==frame[j]){
                frameIndex=j;
                break;
            }
        }
        if(frameIndex!=-1){
            freq[frameIndex]++;
        }
        else{
            minFreqIndex=0;
            for(j=0;j<nf;j++){
                if(freq[j] < freq[minFreqIndex]){
                    minFreqIndex=j;
                }
            }

            frame[minFreqIndex]=currentPage;
            freq[minFreqIndex]=1;
            pf++;
        }

        for(j=0;j<nf;j++){
            if(frame[j]!=-1){
                printf("%d\t",frame[j]);
            }
            else{
                printf("_\t");
            }
        }
        printf("\n");
    }
}
