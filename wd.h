void withdraw(void){
   char title[80];
   int k;
   float x,y;
int found=0;
printf("\nWITHDRAWERS ACCOUNT NO.:");
gets(title);
strcat(title,"\n");
for(i=0;i<top;i++)
{

if(!strcmp(title,(account[i].acc_no)))
{  k = i;
   y = atof(account[i].balance);
   printf("\nEnter Withdrawed Amount:");
   scanf("%f",&x);
   getchar();
   y=y-x;
   gcvt(y,20,account[i].balance);
   strcat(account[i].balance,"\n");
   found=1;
   

}

}
if(found==1){printf("\nUpdated after Withdrawal\n");display(k);}


if(found == 0) {printf("\nAccount Not Exists\n");}
}
