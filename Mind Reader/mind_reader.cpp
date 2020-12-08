#include<iostream>
#include <conio.h>//gotoxy, textcolor, cprintf, getch, clrscr
#include <stdio.h>//printf
#include<stdlib.h>
#include<dos.h>
#define false 0;
#define true 1;
using namespace std;
char rdm()
{
	return (rand() % 18) + 14;
};
char fix()
{
	return (rand() % 18) + 14;
};


void  main()
{
	int one=false;
	int no, a, b, c;
  // _setcursortype(0);

   srand((unsigned) time(0));
   cout<<"MIND READER\n";
   system("mode con cols=74 lines=26");
   char output[512]= "\tChoose any two digit number, add both digits together\n\n"
		  "\tafter that, subtract the total from your original number\n\n"
		 "\tand then, look it up on the chart.\n\n"
		 "\tFind the relevant symbol. Concentrate on the symbol\n\n"
		 "\tand when you have it clearly in your mind press any key\n\n"
		 "\tand it will show you the symbol you're thinking of...\n\n\n\tExample:",
   up[128]= "\n  Choose any two-digit number, subtract the number with the total"
				  " after\n\n  both digits added together.  ";
   x:
   textcolor(LIGHTBLUE);
   gotoxy(35,25);
   cprintf("Author: Shrey Midha");
   gotoxy(1,1);
   cout << "\t---------------------------------------------------------\n"
		 << "\t                      MIND READER\n"
		<< "\t---------------------------------------------------------\n\n";
   if(one==false)
   {
			 cout << output[a];
			 delay(1000);
			 one=true;
			 if(kbhit())goto mylbl;
			 delay(1000);
   }
   else
	   cout<<output;
	   mylbl:
   printf("   if you chose 23 \n\t\t\t");
   textcolor(GREEN);
   cprintf("Ans = 2 + 3 = 5");
   cout<<"\n\t\t\t";
   cprintf("Check the symbol besides 'Ans'.");
   cout<<"\n\n\t\tPress any key to continue(esc - exit)...";

   if(getch()==27)
	   return;

   for(;;)
   {
	  textcolor(3);
	  no=1;
	  c=fix();
	  clrscr();
	   cout << up[a];    delay(10);

	  cprintf( "Focus on the symbol of the final number\n" );
	   for(b=0;b<9 ;b++)
	   {
		  cout << "\n\n ";
		   for(a=0;a<11;a++)
		   {
			 if (no<10)
			 {
				if (no==9)
			   {
				   cprintf(" %d %c   ",no,c);
				  no++;
			   }
			   else
			   {
					  cprintf(" %d %c   ",no,rdm());
				  delay(10);
					 no++;
			   }
			 }
			 else
			 {
				if ( no==81 || no==72 || no==63 || no==54 ||
					no==45 || no==36 || no==27 || no==18    )
				{
				   cprintf("%d %c   ",no,c);
				  no++;
			   }

				 else
			   {
					cprintf("%d %c   ",no,rdm());
				  delay(10);
					 no++;
			   }
			 }
		   }
	   }    delay(1000);
	  cout << "\n\n  Your symbol ";
	  for(;;){
	  gotoxy(15,25);
	  printf("[   ]");
	  delay(1000);
	  gotoxy(15,25);
		printf("     ");
	  delay(1000);
	  if(kbhit())
	  {  int vv=getch();
		  if(vv==13)
		 {
			  textcolor(11);
			  gotoxy(15, 25);
			  cprintf("[ %c ]",c);   delay(1000);
			 break;
		 }
		 if(vv==27)
		 {    clrscr();    goto x;}

	  } }

	  cout<< "\tUnbelievable...? ";  delay(1000);
		  gotoxy(25,25);
		  cout<<"PRESS any key to try again(esc for main menu)!";
		  delay(1000);
		  gotoxy(25,25);
		  cout<<"\t\t\t\t\t\t";
		  delay(1000);
		  if(kbhit())
		  {
			 if(getch()==27)
			  {
			  clrscr();
			  goto x;
			  }
			  else
			  break;
		  }
	  }
   }
