void load(void){


     fp=fopen("catalog.txt","rb");
     for(i=0;i<MAX&&!feof(fp);i++)
     {
    account[i].m=i;
     //gcvt(account[i].m,9,account[i].acc_n);
    fgets(account[i].acc_n,9,fp);
    fgets(account[i].acc_holder_name,79,fp);
    //printf("%s\n",cat[i].name);
    fgets(account[i].acc_no,79,fp);
    //printf("%s\n",cat[i].title);
    fgets(account[i].acc_type,79,fp);
    //printf("%s\n",cat[i].pub);
    fgets(account[i].opening_date,19,fp);
    //printf("%s\n",cat[i].date);
    fgets(account[i].balance,19,fp);
    //printf("%s\n",cat[i].ed);
    //getchar();
     }

     top=i;
     }

