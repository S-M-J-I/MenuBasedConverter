#include<stdio.h>

int main()

{
    char sel;
    int sel2;
    printf("CONVERTER\n\n");
    printf("This is a basic converter.\nPlease select an option:\n");
    printf("A.Speed and Velocity\tB.Temperature\tC.Time\tD.Angles\tE.Currency\nF.Distance\n");
    printf("Enter your choice: ");
    scanf("%c", &sel);

    switch(sel)
    {
    case 'A':
    {

        printf("Select:\n1.m/s to km/h\t2.m/s to mph\t3.km/h to mph.\nEnter your choice: ");
        scanf("%d", &sel2);

        float inp;
        printf("Input speed: ");
        scanf("%f", &inp);
        double conv1 = inp*3.6;
        double conv2 = inp*2.23694;
        double conv3 = inp*0.621371;

        if (sel2==1)
            printf("%.2fm/s to %.2lfkm/h\n\n", inp, conv1);
        else if(sel2==2)
            printf("%.2fm/s to %.2lfmph\n\n", inp, conv2);
        else
            printf("%.2fkm/ph to %.2lfmph\n\n", inp, conv3);





        break;

    }
    case 'B':
    {

        printf("Select:\n1.Fahrenheit to Centigrade\t2.Centigrade to Fahrenheit\nEnter your choice: ");
        scanf("%d", &sel2);

        float inp;
        printf("Input temperature: ");
        scanf("%f", &inp);
        double C = (inp-32)/1.8;
        double F = (inp*1.8)+32;

        if (sel2==1)
            printf("%.2fF to %.2lfC", inp, C);
        else
            printf("%.2fC to %.2lfF", inp, F);





        break;

    }
    case 'C':
    {
        printf("Select:\n1.s to hr\t2.days to s\t3.days to months\nEnter your choice:");
        scanf("%d", &sel2);

        float inp;
        printf("Input time: ");
        scanf("%f", &inp);

        double conv1 = inp/3600;
        double conv2 = inp*86400;
        double conv3 = inp*0.0328767;

        if (sel2==1)
            printf("%.2fs to %.2lfhrs", inp, conv1);
        else if (sel2==2)
            printf("%.2f days to %.2lfs", inp, conv2);
        else
            printf("%.2f days to %.2lf months", inp, conv3);
        break;
    }
    case 'D':
    {
        printf("Select:\n1.Degrees to Radian\t2.Radians to degree\n");
        scanf("%d", &sel2);

        float inp;
        printf("Input angle: ");
        scanf("%f", &inp);

        double Degree = (inp*180)/3.1416;
        double Rad = (inp*3.1416)/180;

        if (sel2==1)
            printf("%.2f degrees to %.2lf radians", inp, Rad);
        else
            printf("%.2f radians to %.2lf degrees", inp, Degree);

        break;
    }

    case 'E':
        {
            printf("Select:\n1.USD to GBP\t2.BDT to USD\t3.BDT to GBP\n");
            scanf("%d", &sel2);

            float inp;
            printf("Input Currency: ");
            scanf("%f", &inp);

            double conv1 = inp*0.85;
            double conv2 = inp*0.012;
            double conv3 = inp*0.0100;

            if (sel2==1)
                printf("%.2fUSD to %.2lfGBP", inp, conv1);
            else if(sel==2)
                printf("%.2fBDT to %.2lfUSD", inp, conv2);
            else
                printf("%.2fBDT to %.2lfGBP", inp, conv3);

            break;






        }

    case 'F':
        {
            printf("Select:\n1.cm to m\t2.m to km\t3.km to cm\n");
            scanf("%d", &sel2);

            float inp;
            printf("Input distance: ");
            scanf("%f", &inp);

            double conv1 = inp/100;
            double conv2 = inp/1000;
            double conv3 = inp*100000;

            if (sel2==1)
                printf("%.2fcm to %.2lfm", inp, conv1);
            else if (sel2==2)
                printf("%.2fm to %.2lfkm", inp, conv2);
            else
                printf("%.2fkm to %.2lfcm", inp, conv3);

            break;



        }



    default:
        printf("Error: Not a valid option");


    }

    printf("\n\nMade by S M Jishanul Islam\n\n");


    return 0;

}
