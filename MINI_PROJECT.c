#include <stdio.h>

int main() {
float a,total,GST=0,sum=0;
printf("Dear customer, Please Enter units you consumed :");
scanf("%f",&a);
if(a<101){
    sum=a*6.38;
}
else if(a<301){
    sum=((100*6.38)+((a-100)*9.63));
}
else if(a<501){
    sum=((100*6.38)+(200*9.63)+((a-300)*11.03));
}
else if(a>500){
    sum=((100*6.38)+(200*9.63)+(200*11.03)+((a-500)*11.98));
}
GST=sum*0.18;
total=sum+GST;
printf("\n--- Electricity Bill ---\n");
printf("Base Amount:  %.2f rupees\n",sum);
printf("GST (18%%):    %.2f rupees\n",GST);
printf("Total Amout:  %.2f rupees\n",total);
    return 0;
}