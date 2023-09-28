#include <stdio.h>
#include <stdlib.h>

 int fyd(int x){
      
      int y, given=1101 ;
 y =x;
      //2002 2002-1101=901
      //901/4=225*366
      //901-225=676*365 0 tues 1 wed  2 thu  3 fri 4 sat 6 mon 
      
      
      int years = y-given;
      int leapyears=years/4;
      int nonleapyear  =  years-leapyears;
      int totalDays = (leapyears*366)+(nonleapyear *365)+1;
     
     int z=totalDays%7;
    
     return z;
  }

 int main(){
     system("color 3f");
int y ;     
 printf("Enter the year : ");
 scanf("%d", &y);
 printf("\n");
 printf(">>>>>>><<<<<<<<\n");
  printf("\n");
 char *m[]= {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
 int i,j,flag=0;
 int st=fyd(y);
 int count=0,temp=0;
  for(i=0; i<12;i++){
      
      printf("----------------------%s---------------------\n",m[i]);
      printf("Sun     Mon     TUE     WED     ThuR    Fri    Sat \n");
      
   
    if(st==6){
           printf("      ");
           count=2;
           st=5;
    }
     if(st==0){
           printf("          ");
             count=3;
             st=5;
    }
     if(st==1){
           printf("            ");
             count=4;
             st=5;
    }
     if(st==2){
           printf("               ");
             count=5;
             st=5;
    }
       if(st==3){
           printf("                  ");
             count=6;
             st=5;
    }
       if(st==4){
           printf("                     ");
             count=7;
             st=5;
    }
    
    for(int i=0; i<temp; i++){
        printf("       ");
    }
     temp=0;
      for( j =1 ; j<32 ; j++){
        
           if(count==7 || count>7){
               printf("\n");
               count=0;
           }
            printf(" %5d ",j);
          count++;
      }printf("\n");
    
      temp=0;
     temp=count;
    
  }
return 0;
}