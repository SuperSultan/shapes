/* 
	This program prints out a pattern of stars resulting
	in either a square, a right triangle, or a diamond as requested by the user
	Written by: Afnan Sultan
	Date Last Modified: 6/19/17 
*/

   #include <stdio.h>

// Function Declarations
   int menu (int number, int code, int i, int rows, int columns, int stars2, int spaces);
   void display_greeting_message (void);
   int print_stars (int stars);
   int print_blanks (int stars);
   void print_squares (void);
   void print_triangle (void);
   void print_diamond (int number, int rows, int columns, int stars2, int spaces);
   void display_goodbye_message (void);

int main (void) 
{
   // Local declarations
   int number;
   int code;
   int i;
   int rows;
   int columns;
   int stars2;
   int spaces = 1;

   menu(number, code, i, rows, columns, stars2, spaces);

   printf("%d", code);
   
   	 } // main
 
   // This function, menu, is the switch case for the pattern selection.
   int menu (int number, int code, int i, int rows, int columns, int stars2, int spaces) 
{

	do {

   display_greeting_message();

   // Statements 
   printf("You may enter the code now:", code);
   scanf("%d", &code);

  switch (code)
{
   case 3:
   print_diamond(number, rows, columns, stars2, spaces);
   break;

   case 2:
   print_triangle();
   break;

   case 1:
   print_squares();
   break;

   case 0:
   display_goodbye_message();
   break;

   default:
   printf("Incorrect code. Enter 1, 2, 3, or 0.");
}

	} while (code!=0); //do-while

}//menu

   // This is the greeting message function for the user, which prompts selection.
   void display_greeting_message (void) 
{ 
   printf("****************************************************************\n");
   printf("**************** WELCOME TO THE PATTERN PRINTERi ***************\n");
   printf("* Enter a code of 1 to print a square pattern of stars         *\n");
   printf("* Enter a code of 2 to print a right triangle pattern of stars *\n");
   printf("* Enter a code of 3 to print a diamond pattern of stars        *\n");
   printf("* Enter a code of 0 to stop printing patterns                  *\n");
   printf("*                                                              *\n");
   printf("****************************************************************\n");

}// display_greeting_message

   // This function prints blanks based on user input.
   int print_blanks (int stars) 
{
   int num_blanks;
   for (num_blanks=1; num_blanks<=stars; num_blanks++) 
	{
   printf(" ", num_blanks); 
	}//for

}// print_blanks

   // This function prints stars based on user input.
   int print_stars (int stars) 
{
   int num_stars;
   for (num_stars=1; num_stars<=stars; num_stars++) 
	{
   printf("*"); 
	}//for loop

   return;
}// print_stars

   // This function prints a square based on an integer value given by the user.
   void print_squares (void) 
{

   int rows;
   int num_square;

   printf("Enter the size of the square (integer): ");
   scanf("%d", &rows);

   for (num_square=0; num_square<rows; num_square++) 
	{
   print_stars(rows);

   printf("\n"); 
}//for loop

   printf("\n");
   return;

}// print squares

   // This function prints a triangle based on an integer value given by the user.
   void print_triangle (void) 
{
   int rows;
   int number;
   printf("Enter the base of the triangle (integer): ");
   scanf("%d", &rows);

   for (number=1; number<=rows; number++) 
	{
   print_stars(number);
   printf("\n");
}//for loop

   printf("\n");
   return;
} //print_triangle

   // This function prints a diamond based on an integral value given by the user.
   void print_diamond (int number, int rows, int columns, int stars2, int spaces) 
{

  if (number%2==0)
{	number++;
	}//if

   printf("Enter an integer value for the width: ");
   scanf("%d", &rows);

   spaces = rows-1;

   for (stars2 = 1; stars2 <= rows; stars2++)
{
    for (columns = 1; columns <= spaces; columns++)
    	printf(" ");
    spaces--;
    for (columns = 1; columns <= 2*stars2-1; columns++)
    	printf("*");
    printf("\n");
}//first half of diamond

   spaces = 1;

   for (stars2 = 1; stars2 <= rows - 1; stars2++)
{
   for (columns = 1; columns <= spaces; columns++)
   	printf(" ");
   spaces++;
   for (columns = 1 ; columns <= 2*(rows-stars2)-1; columns++)
	printf("*");

    printf("\n");
  }//for loop

} //print_diamond

   // This function is the goodbye message for the user.
   void display_goodbye_message (void) 
{
   printf("****************************************************************\n");
   printf("*\t\t\tGOOD BYE!!!\t\t\t       *\n");
   printf("****************************************************************\n");

}//display_goodbye_message
