#include<stdio.h>
int remainder(int fr[]);
int gen[4],genl,frl,rem[4];
void main(){
int i,j,fr[8],dupfr[11],recfr[11],frl=8,genl=4,tlen=0,flag=0;
printf("enter frame:");
for(int i=0;i<frl;i++){
scanf("%d",&fr[i]);
dupfr[i]=fr[i];
}
printf("Enter generator:");
for(int i=0;i<genl;i++)
scanf("%d",&gen[i]);

tlen=frl+genl-1;
for(i=frl;i<tlen;i++){
dupfr[i]=0;
}
remainder(dupfr);
for(int i=0;i<frl;i++){
recfr[i]=fr[i];
}
for(int i=frl,j=1;j<genl;i++,j++){
recfr[i]=rem[j];
}
remainder(recfr);
flag=0;
for(int i=0;i<4;i++){
if(rem[i]!=0)
flag++;
}
if(flag==0){
printf("Frame recieved correctly");
}
else{
printf("The recieved frame is wrong");
}
}
int remainder(int fr[])
{
int k,k1,i,j;
for(int k=0;k<frl;k++){
if(fr[k]==1){
k1=k;
for(int k=0;k<genl;k++)
{
rem[i]=fr[j]^gen[i];
}
for(i=0;i<genl;i++){
fr[k1]=rem[i];
k1++;
}
}
}
}
