#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A, B, C, temp;
    scanf("%lf %lf %lf", &A, &B, &C);
    if (B > A && B > C){
        if (A > C){
            temp = A;
            A = B;
            B = temp;
        }
        else{
            temp = A;
            A = B;
            B = C;
            C = temp;
        }
    }
    else if (C > A && C > B){
        if (A > B){
            temp = A;
            A = C;
            C = B;
            B = temp;
        }
        else{
            temp = A;
            A = C;
            C = temp;
        }
    }
    else if(A > B && A > C && C > B){
        temp = B;
        B = C;
        C = temp;
    }

    if (A >= B + C){
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if (A*A == B*B + C*C)
        printf("TRIANGULO RETANGULO\n");
    if (A*A > B*B + C*C)
        printf("TRIANGULO OBTUSANGULO\n");
    if (A*A < B*B + C*C)
        printf("TRIANGULO ACUTANGULO\n");
    if (A == B && A == C)
        printf("TRIANGULO EQUILATERO\n");
    if ((A == B && A != C) || (A == C && A != B) || (B == C && B != A))
        printf("TRIANGULO ISOSCELES\n");


    return 0;
} 
