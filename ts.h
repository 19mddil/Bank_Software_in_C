void acc_no_search(void){

char title[80];

int found=0;
printf("\nPLEASE ENTER ACCOUNT NO.:");
gets(title);
strcat(title,"\n");
for(i=0;i<top;i++)
{

if(!strcmp(title,(account[i].acc_no)))
{
   display(i);
   found=1;

}

}
if(found==0){printf("not found");}


}
