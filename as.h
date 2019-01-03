void acc_name_search(void){
char name[80];
int k;
int found=0;
printf("\nPLEASE ENTER ACCOUNT NAME:");
gets(name);
strcat(name,"\n");
for(i=0;i<top;i++)
{

///printf("%d\n",strcmp(name,cat[i].name));
if(!strcmp(name,account[i].acc_holder_name))
{
   display(i);
   found=1;

}

}
if(found==0){printf("NOT FOUND");}
}
