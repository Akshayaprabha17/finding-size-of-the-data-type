//size of the data type
#include<stdio.h>
#include<conio.h>
int main()
{
      short s;
      int i;
      long l;
      unsigned short us;
      unsigned int ui;
      unsigned long ul;
      float f;
      double d;
      char a;
      char c[40];
      printf("\n\t\t THE SIZE OF THE DATA TYPES");
      printf("\n======================================================");
      printf("\nshort\t%d",sizeof (s));
      printf("\nint\t%d",sizeof (i));
      printf("\nlong\t%d",sizeof (l));
      printf("\nunsigned short\t%d",sizeof (us));
      printf("\nunsigned int\t%d",sizeof (ui));
      printf("\nunsigned long\t%d",sizeof (ul));
      printf("\nfloat\t%d",sizeof (f));
      printf("\ndouble\t%d",sizeof (d));
      printf("\nchar\t%d",sizeof (a));
      printf("\nchar[40]%d",sizeof (c));
      getch();


    return 0;
}