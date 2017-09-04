 float PedirNumero()
                {
                    float Numero;
                    printf("Ingrese un numero: ");
                    scanf("%f",&Numero);

                    return Numero;
                }

 float Sumar(float Num1, float Num2)
                {
                    float Resultado;
                    Resultado = Num1 + Num2;

                    return Resultado;
                }
 float Resta(float Num1, float Num2)
                {
                    float Resultado;
                    Resultado = Num1 - Num2;

                    return Resultado;
                }
float Division(float Num1, float Num2)
                {
                    float Resultado;
                    while(Num2 == 0)
                    {
                        printf("Error, ingrese un numero que no sea 0: ");
                        scanf("%f",&Num2);
                    }
                    Resultado = Num1 / Num2;

                    return Resultado;
                }
float Multiplicacion(float Num1, float Num2)
                {
                    float Resultado;
                    Resultado = Num1 * Num2;

                    return Resultado;
                }
long long int Factorial(long long int i)
                {
                    int acumulador = 1;
                    while(i > 12)
                    {
                        printf("Error, ingrese un numero igual o menor a 12\n");
                        i = PedirNumero();
                    }
                    while(i < 0)
                    {
                        printf("Error, el numero no puede ser menor a 0\n");
                        i = PedirNumero();
                    }
                    while(i == 1 || i ==0)
                    {
                        return 1;
                    }
                    for(i = i; i>0; i--)
                    {
                        acumulador = acumulador*i;
                    }
                    return acumulador;
                }
