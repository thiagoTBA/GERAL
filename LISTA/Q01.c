# include <stdio.h>
# include <conio.h>

   main()
   {
       int i;
       
       for(i=1000; i<=2000; i++)
         {
            if(i%11==5)
               {
                   printf("%3d\t", i);
               }
         }
      getch();
   return 0;
   }
