//4. Accept temprature in Fahrenheit and convert it to celsius

#include<stdio.h>


double FhtoCs(float fTemp)
{
    double dCelcius = 0.0;
    
    dCelcius = ((fTemp - 32)* 5.0/9.0);
    return dCelcius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Temperature \n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);
    printf("Temp in Celcius is %lf \n",dRet);

    return 0;
}