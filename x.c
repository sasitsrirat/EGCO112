/*******************************************************************************/
#include <stdio.h>

void useLocal();
void useStaticLocal();
void useGlobal();

int x=1;  //global -->10 //ค่าเปลี่ยนได้

int main()
{
   printf("Global x in main is %d \n",x); //เอาค่าประกาศก่อนมาใช้ บนลงล่าง
   int x=5;// local in main
   
   printf("Local x in main is %d \n",x); //เอาค่าประกาศบนมาใช้
  
  
   {  //block start new scope
       int x=7;// hides both x in outer scope and global xor_eqconst_cast //ค่าอยู่แค่ในที่นี้ บล็อคนี้
       printf("Local x in main's inner scope is %d \n",x);
   }

  printf("Local x in main is %d \n",x);
  printf("\n========================\n");
  useLocal();
  useLocal();
        
  printf("\n========================\n");
  useStaticLocal();
  useStaticLocal();
  printf("\n========================\n");
  useGlobal();
  useGlobal();
         
  return 0;
}

void useLocal(){
    int x=25;
    
    printf("\nlocal x is %d on entering useLocal\n",x);
    
     ++x;   
    printf("\nlocal x is %d on exiting useLocal\n",x);
    //ทั้งสองตัวใช้ค่าในนี้ และค่าไม่เปลี่ยนแปลง 
}


void useStaticLocal(){
   static int x=50;
    
    printf("\nlocal x is %d on entering useStaticLocal\n",x);
    
     ++x;   
    printf("\nlocal x is %d on exiting useStaticLocal\n",x);
    //ค่าเปลี่ยนแปลง เพราะเป็นตัวแปล static

}

void useGlobal()
{
    printf("\nlocal x is %d on entering useGlobal\n",x);
    x*=10;   
    printf("\nlocal x is %d on exiting useGlobal\n",x);
    //ใช้ตัวแปร Global

}

//gcc main.c and ./a.out
//gcc main.o -o gram