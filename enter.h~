void enter(void){
    char ch='\n';

    int x;
    printf("\nHow many account do you want to add: ");
    scanf("%d",&x);
    x=top+x;
    getchar();
for(i=top;i<x;i++)//top is to add more information but not overwrite
{
   account[i].m=i;
   gcvt(account[i].m,9,account[i].acc_n);
   strcat(account[i].acc_n,"\n");
   printf("ENTER ACCOUNT HOLDER NAME:");
   gets(account[i].acc_holder_name);
   strcat(account[i].acc_holder_name,"\n");
  /* printf("%d\n",strcmp((cat[i].name),st));
   if(strcmp((cat[i].name),st)==1){break;}*/
   printf("ENTER ACCOUNT NO:");
   gets(account[i].acc_no);
   strcat(account[i].acc_no,"\n");
   printf("ENTER ACCOUNT TYPE:");
   gets(account[i].acc_type);
   strcat(account[i].acc_type,"\n");
   printf("ENTER OPENING DATE:");
   gets(account[i].opening_date);
   strcat(account[i].opening_date,"\n");
   printf("ENTER BALANCE:");
   gets(account[i].balance);
   strcat(account[i].balance,"\n");

}
top=i;
}

