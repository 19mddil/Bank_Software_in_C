
//i will save the output using >
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"initials.h"
#include"display.h"
#include"menu.h"
#include"enter.h"
#include"as.h"
#include"ts.h"
#include"save.h"
#include"load.h"
#include"depo.h"/**newly added**/
#include"wd.h"/**newly added**/
int main(void){
      int choice;

      load();
      do{
      choice=menu();
      switch(choice){
      case 1:enter();
      break;
      case 2:acc_name_search();
      break;
      case 3:acc_no_search();
      break;
      case 4:deposit();
      break;
      case 5:withdraw();
      break;
      case 6:save();
      }
      }while(choice!=7);
      return 0;
}















