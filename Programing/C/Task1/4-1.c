  #include <stdio.h>

int main(void) {

     double Hight , Base , Area ;
     printf("To compute Area of  triangle please enter Hight: ");
     scanf("%lf",&Hight);
      printf("To compute Area of  triangle please enter Base: ");
       scanf("%lf",&Base);
       Area = (Hight*Base)*(0.5);
        printf("The area is: %.2lf\n", Area);



                    return 0;
}
