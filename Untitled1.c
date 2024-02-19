main()
{
    int numeroUno,numeroDos,resultados;
    printf ("ingresa el primer numero:");
    if(scanf("%d",numeroUno)==1);
    {
        printf("valor valido\n");

        printf("ingresa el segundo valor:");
        if(scanf("%d",&numeroDos)==1)
        {
            printf("Valor Valido");
            resultado = numeroUno + numeroDos;
            printf("El resultado de la suma es: %d",resultado);
        }
        else
        {
            printf("Valor No Valido \n");
        }
    }
    else
    {
        printf("Valor no valido \n");
    }
