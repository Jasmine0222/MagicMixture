//******************************************************************************
//***** Written by : Jasmine Williams
//***** Date Written 09/07/2019
//**** Purpose : To display the amount of gallons and ounces it will need to store the combined chemicals
//******************************************************************************

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float  h= 1.5, t=128 ;
    float KryptonOz, LithiumOz, OsmiumOz, MercuryOz, TotalOz, Ounces;
    float test0, test1, test2, test3, test4;
    int Gallons, multiply;
    
    printf("Enter the amount of ounces for Krypton: \n");
    scanf("%f", &KryptonOz);
    printf("You entered %f\n", KryptonOz);
    printf("Enter the amount of ounces for Lithium: \n");
    scanf("%f", &LithiumOz);
    printf("You entered %f\n", LithiumOz);
    printf("Enter the amount of ounces for Osmium: \n");
    scanf("%f", &OsmiumOz);
    printf("You entered %f\n", OsmiumOz);
    printf("Enter the amount of ounces for Mercury: \n");
    scanf("%f", &MercuryOz);
    printf("You entered %f\n", MercuryOz);
    
    
    test0 = LithiumOz + OsmiumOz; /* Add Lithium (li) to mix. Add Osmium (os) to mix.*/
    test1 = test0 * LithiumOz; /*Add more Osmium to mix as follows:current total ounces*li */
    test2 = OsmiumOz * MercuryOz; /* Add Mercury (hg) * Osmium */
    test3 = KryptonOz * h; /* Add Krypton (kr) * 1.5 */
    test4 = LithiumOz + LithiumOz; /* Add two more Lithium. */
    
    
    TotalOz = test0 + test4 + test1 + test2 + test3;
    printf("Total Oz: %f\n", TotalOz); /* output the total oz based on input */
    
    Gallons = TotalOz / t ;
    printf("Gallons: %d\n", Gallons); /* amount of gallons you can make from total oz */
    
    multiply = Gallons * t;
    Ounces = TotalOz - multiply;
    printf("Ounces: %f\n", Ounces); /* amount of ounces left after gallons*/
    
    system("pause");
}

