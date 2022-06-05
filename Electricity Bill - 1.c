//
//  Electricity Bill - 1.c
//  C Programming
//
//  Created by Abhijat Dakshesh on 27/01/22.
//


#include <stdio.h>

int main()
{
    int unit;
    float amt, total_amt, sur_charge;

    /* Input unit consumed from user */
    printf("Enter total units consumed: ");
    scanf("%d", &unit);


    /* Calculate electricity bill according to given conditions */
    if(unit <= 200)
    {
        amt = 100 + unit * 0.80;
    }
    else if(unit >= 200 && unit <=300 )
    {
        amt = 100 + 0.8 *200 +((unit-200) * 0.90);
    }
    else
    {
        if (unit > 300){
            amt = (unit-300)*1 + 250+ 100; // 0.80*200 + 90 = 250
        }
        if( unit > 400){
            sur_charge = amt * 0.15;
                total_amt  = amt + sur_charge;
        }
    }
    

    printf("Electricity Bill = Rs. %.2f", total_amt);

    return 0;
}
