#include<stdio.h>
int main() {
    char drazil[12];
    char doraemon[12];

    fgets(drazil,sizeof(drazil),stdin);
        fgets(doraemon,sizeof(doraemon),stdin);
int final=0;
        for(int p=0;drazil[p]!='\n';p++){
            if(drazil[p]=='+'){final++;}
            else if(drazil[p]=='-'){final--;}
        }
int req=0;
int doubt=0;
                for(int p=0;doraemon[p]!='\n';p++){
            if(doraemon[p]=='+'){req++;}
            else if(doraemon[p]=='-'){req--;}
            else if(doraemon[p]=='?'){doubt++;}
        }
int hmm=final-req;
double count=0;
for(int i=0;i<(1<<doubt);i++)
{
    int runreq=0;
    for(int p=0;p<doubt;p++){
    if(i & (1<<p)){
        runreq++;
    }
else{runreq--;}}
{if(runreq==hmm){count++;}}
}
printf("%.12lf", count/(1<<doubt));
    return 0;
}