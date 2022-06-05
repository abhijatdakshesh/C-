//
//  Weekday.c
//  C Programming
//
//  Created by Abhijat Dakshesh on 18/01/22.
//

#include <stdio.h>
    int main()
    {
      int weekday;
      printf(" Please Enter the Day Number 1 to 7 (Consider 1= Monday, and 7 = Sunday) :");
      scanf("%d", &weekday);
      
      switch (weekday)
      {
          case 1:
              printf("Today is Monday\n");
              break;
          case 2:
              printf("Today is Tuesday\n");
              break;
          case 3:
              printf("Today is Wednesday\n");
              break;
          case 4:
              printf("Today is Thursday\n");
              break;
          case 5:
              printf("Today is Friday\n");
              break;
          case 6:
              printf("Today is Saturday\n");
              break;
          case 7:
              printf("Today is Sunday\n");
              break;
        default:
            printf("\n Please enter Valid Number between 1 to 7");
      }
      return 0;
    }

