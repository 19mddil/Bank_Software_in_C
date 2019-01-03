void save(void){

fp=fopen("catalog.txt","wb");
for(i=0;i<top&&!feof(fp);i++)
{
  fputs(account[i].acc_n,fp);

  fputs(account[i].acc_holder_name,fp);

  fputs(account[i].acc_no,fp);

  fputs(account[i].acc_type,fp);

  fputs(account[i].opening_date,fp);

  fputs(account[i].balance,fp);


}
fclose(fp);
}
