#include<stdio.h>
void main(){
	int flag[100],count[100],min=0,i,j,p,f,page[100],frame[100],next=0,pf=0;
	printf("Enter the number of pages : ");
	scanf("%d",&p);
	printf("Enter the pages \n");
	for(i=0;i<p;i++){
		scanf("%d",&page[i]);
		flag[i]=0;
	}
	printf("\nEnter the frames : ");
	scanf("%d",&f);
	for(j=0;j<f;j++){
		count[j]=0;
		frame[j]=-1;
	}
	for(i=0;i<p;i++){
		for(j=0;j<f;j++){
			if(frame[j]==page[i]){
				flag[i]=1;
				count[j]=next;
				next++;
			}
		}
		if(flag[i]==0){
			if(i<f){
				frame[i]=page[i];
				count[i]=next;
				next++;
			}
			else{
				min=0;
				for(j=0;j<f;j++)
				  if(count[min] > count[j])
				    min=j;
				frame[min]=page[i];
				count[min]=next;
				next++;
			}
			pf++;
		}
		for(j=0;j<f;j++)
		printf("%d\t",frame[j]);
		printf("\n");
	}
	printf("%d",pf);
}
