 #include <stdio.h>

 /**
  * main - Prints the alphabetic in lower and upper case
  *
  * Return: Always (success)
  */

 int main(void)
 {
         char c;

	 for (c = 'a'; c <= 'z'; c++)

	 {
		 putchar(c);
	 }

	 for (c = 'A'; c <= 'z'; c++)
	 {
		 putchar(c);

         }

	 putchar('\n');

	 return (0);
  }
