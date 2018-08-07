#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int quien_parte (){
    int x;
    x = (rand() %2)+1;
    return x;
    }
int turno_Cpu (){
    int x;
    x = (rand() %8)+1;
    return x;
}


int comprobar_empate(int filas, int columnas, int tablero[filas][columnas]){
  int cont=0;
    for (int i=0; i<filas;i++){
        for (int j=0;j<columnas;j++){
            if (tablero[i][j]!=32){
                cont++;
            }
        }
    }
     if (cont==64){
        printf(".......:::ha habido un empate, no hay ganador :::.....");
   return cont;
        }
}

int comprobar_diagonal (int ficha, int filaValida, int filas, int columnas,int columnasusuario, int tablero[filas][columnas]){
    int winner=0;
    if((tablero [filaValida][columnasusuario]== ficha) && (tablero [filaValida+1][columnasusuario+1]== ficha)&&(tablero [filaValida+2][columnasusuario+2]== ficha) && (tablero [filaValida+3][columnasusuario+3] == ficha)){
        printf("Has completado 4 en Rayas en la diagonal \n");
        printf("......:::FELICIDADES!! :::.... \n");

        winner=1;
    }

    if((tablero [filaValida][columnasusuario]== ficha) && (tablero [filaValida-1][columnasusuario-1]== ficha)&&(tablero [filaValida-2][columnasusuario-2]== ficha) && (tablero [filaValida-3][columnasusuario-3] == ficha)){
        printf("Has completado 4 en Rayas en la diagonal \n");
        printf("......:::FELICIDADES!! :::.... \n");

        winner=1;
    }
     if((tablero [filaValida][columnasusuario]== ficha) && (tablero [filaValida-1][columnasusuario-1]== ficha)&&(tablero [filaValida-2][columnasusuario-2]== ficha) && (tablero [filaValida+1][columnasusuario+1] == ficha)){
        printf("Has completado 4 en Rayas en la diagonal \n");
        printf("......:::FELICIDADES!! :::.... \n");

        winner=1;
    }
     if((tablero [filaValida][columnasusuario]== ficha) && (tablero [filaValida-1][columnasusuario-1]== ficha)&&(tablero [filaValida+1][columnasusuario+1]== ficha) && (tablero [filaValida+2][columnasusuario+2] == ficha)){
        printf("Has completado 4 en Rayas en la diagonal \n");
        printf("......:::FELICIDADES!! :::.... \n");

        winner=1;
    }
        if((tablero [filaValida][columnasusuario]== ficha) && (tablero [filaValida+1][columnasusuario-1]== ficha)&&(tablero [filaValida+2][columnasusuario-2]== ficha) && (tablero [filaValida+3][columnasusuario-3] == ficha)){
        printf("Has completado 4 en Rayas en la diagonal \n");
        printf("......:::FELICIDADES!! :::.... \n");

        winner=1;
    }

    if((tablero [filaValida][columnasusuario]== ficha) && (tablero [filaValida-1][columnasusuario+1]== ficha)&&(tablero [filaValida-2][columnasusuario+2]== ficha) && (tablero [filaValida-3][columnasusuario+3] == ficha)){
        printf("Has completado 4 en Rayas en la diagonal \n");
        printf("......:::FELICIDADES!! :::.... \n");

        winner=1;
    }
     if((tablero [filaValida][columnasusuario]== ficha) && (tablero [filaValida-1][columnasusuario+1]== ficha)&&(tablero [filaValida-2][columnasusuario+2]== ficha) && (tablero [filaValida+1][columnasusuario-1] == ficha)){
        printf("Has completado 4 en Rayas en la diagonal \n");
        printf("......:::FELICIDADES!! :::.... \n");

        winner=1;
    }
     if((tablero [filaValida][columnasusuario]== ficha) && (tablero [filaValida-1][columnasusuario+1]== ficha)&&(tablero [filaValida+1][columnasusuario-1]== ficha) && (tablero [filaValida+2][columnasusuario-2] == ficha)){
        printf("Has completado 4 en Rayas en la diagonal \n");
        printf("......:::FELICIDADES!! :::.... \n");

        winner=1;
     }

    return winner;
}

int comprobar_vertical (int ficha, int filaValida, int filas, int columnas,int columnasusuario, int tablero[filas][columnas]){
    int winner=0;
    if((tablero [filaValida][columnasusuario]== ficha) && (tablero [filaValida+1][columnasusuario]== ficha)&&(tablero [filaValida+2][columnasusuario]== ficha) && (tablero [filaValida+3][columnasusuario] == ficha)){
        printf("Has completado 4 en Rayas en la columna %d \n", columnasusuario+1);
        printf("......:::FELICIDADES!! :::.... \n");

        winner=1;
    }

    return winner;
}

int comprobar_horizontal (int ficha, int filaValida, int filas, int columnas,int columnasusuario, int tablero[filas][columnas]){
    int winner=0;
    if((tablero [filaValida][columnasusuario]== ficha) && (tablero [filaValida][columnasusuario+1]== ficha)&&(tablero [filaValida][columnasusuario+2]== ficha) && (tablero [filaValida][columnasusuario+3] == ficha)){
        printf("Has completado 4 en Rayas en la fila %d \n", filaValida+1);
        printf("......:::FELICIDADES!! :::.... \n");

        winner=1;
    }

    if((tablero [filaValida][columnasusuario]== ficha) && (tablero [filaValida][columnasusuario-1]== ficha)&&(tablero [filaValida][columnasusuario-2]== ficha) && (tablero [filaValida][columnasusuario-3] == ficha)){
        printf("Has completado 4 en Rayas en la fila %d \n", filaValida+1);
        printf("......:::FELICIDADES!! :::.... \n");

        winner=1;
    }
     if((tablero [filaValida][columnasusuario]== ficha) && (tablero [filaValida][columnasusuario-1]== ficha)&&(tablero [filaValida][columnasusuario-2]== ficha) && (tablero [filaValida][columnasusuario+1] == ficha)){
        printf("Has completado 4 en Rayas en la fila %d \n", filaValida+1);
        printf("......:::FELICIDADES!! :::.... \n");

        winner=1;
    }
     if((tablero [filaValida][columnasusuario]== ficha) && (tablero [filaValida][columnasusuario-1]== ficha)&&(tablero [filaValida][columnasusuario+1]== ficha) && (tablero [filaValida][columnasusuario+2] == ficha)){
        printf("Has completado 4 en Rayas en la fila %d \n", filaValida+1);
        printf("......:::FELICIDADES!! :::.... \n");

        winner=1;
    }

    return winner;
}

void imprimir (int filas, int columnas, int tablero [filas][columnas]){

    for (int i=0; i<filas; i++){
        for (int j=0; j<columnas;j++){
                printf("[%c] ", tablero[i][j]);
        }
        printf("\n");
    }
}


void posicionar_ficha (int filas,int filaValida, int columnas, int columnausuario, int tablero [filas][columnas], int ficha){
    tablero[filaValida][columnausuario]= ficha;
}

void crear_tablero(int filas, int columnas, int tablero[filas][columnas]){

    for (int i=0; i<filas;i++){
        for (int j=0;j<columnas;j++){
            tablero[i][j] = 32;
        }
    }
}

int validar_fila (int filas, int columnas, int columnausuario, int tablero [filas][columnas]){
        while(tablero [filas][columnausuario]!= 32){
            filas--;
                if(tablero[0][columnausuario]!=32){
                printf("la columna se encuentra llena, usted pierde turno, le toca al otro jugador\n");
                printf("ingrese otra columna que no este llena para continuar\n");
                printf("\n\n");
                break;
                }
        }


    return filas;
}

int main (){
    int filas=8;
    int columnas=8;
    int tablero[filas][columnas];
    int opcionjuego,z, ganador=0, turno, columnausuario, continuar;
    int jug1_ficha = 88, jug2_ficha = 79;
    int filaValida;
    int verti,hori,diago;
    int jugar=1;
    int empate;
    srand(time(NULL));

    while (jugar==1){

    crear_tablero(filas, columnas, tablero);
    printf(".........:::Bienvenido al Juego 4 en Rayas ICB:::........... \n \n");
    printf(":::  Por favor indique la modalidad de juego que desea   ::: \n \n");
    printf(":::   Opcion '1': Jugador 1 Vs Jugador 2   :::\n");
    printf(":::   Opcion '2': Jugador 1 Vs CPU    :::\n\n");
    printf("        :::Ingrese la Opcion, la cual sera la modalidad del juego :::     \n");
    scanf("%d", &opcionjuego);

    while (opcionjuego!=1 && opcionjuego!=2){
        printf(":::   Opcion no valida, ingrese nuevamente   :::\n");
        scanf("%d", &opcionjuego);
    }
    system("clear");
    if (opcionjuego==1){
        printf("\n");
        printf("     ...::modo de juego : Jugador 1 vs Jugador 2:::...     \n\n");
        printf("En el juego se puede ser 'El Jugador 1' o 'El Jugador 2'\n");
        printf(" Usted es el Jugador 1 y su compañero el Jugador 2 \n");
        printf("Presione el numero cero para continuar \n :::::................\n");
        scanf("%d", &continuar);

        while (continuar!=0){
            system("clear");
            printf("Por favor ingresa el numero '0' si deseas continuar\n");
            scanf("%d", &continuar);
        }
        system("clear");
        z= quien_parte();
        printf("Quien partira el juego es el Jugador : %d\n\n", z);
        turno=z;
        imprimir(filas, columnas, tablero);

        while(ganador==0){
            if(turno==1){
                printf("Jugador %d, ingrese en que columna insertara su ficha \n",turno);
                scanf("%d", &columnausuario);
                columnausuario--;
                system("clear");
                while((columnausuario>7) || (columnausuario<0)){
                    printf("Columna no valida, ingrese nuevamente \n");
                    scanf("%d",& columnausuario);
                    columnausuario--;
                    break;
                }
                filaValida = validar_fila(filas, columnas,columnausuario,tablero);
                posicionar_ficha(filas, filaValida, columnas , columnausuario, tablero, jug1_ficha);
                imprimir(filas, columnas, tablero);


                hori=comprobar_horizontal(jug1_ficha,filaValida,filas,columnas,columnausuario,tablero);
                verti= comprobar_vertical(jug1_ficha,filaValida,filas,columnas,columnausuario,tablero);
                diago=comprobar_diagonal(jug1_ficha,filaValida,filas,columnas,columnausuario,tablero);
                empate=comprobar_empate(filas,columnas,tablero);

                if(empate==64){
                    break;
                }

                if ((hori==1) || (verti==1)||(diago==1)){
                 printf("Ganador Jugador %d", turno);
                 printf("....::: BIEN JUGADO :::....\n\n");
                break;

                }
                else {
                turno=2;
                }
            }

            if(turno==2){

                printf("Jugador %d, ingrese en que columna insertara su ficha \n",turno);
                scanf("%d", &columnausuario);
                columnausuario--;
                system("clear");
                while((columnausuario>7) || (columnausuario<0)){
                    printf("Columna no valida, ingrese nuevamente \n");
                    scanf("%d",& columnausuario);
                    columnausuario--;
                    break;
                }
                filaValida = validar_fila(filas, columnas,columnausuario,tablero);
                posicionar_ficha(filas, filaValida, columnas, columnausuario, tablero, jug2_ficha);
                imprimir(filas, columnas, tablero);
                verti= comprobar_vertical(jug2_ficha,filaValida,filas,columnas,columnausuario,tablero);
                hori= comprobar_horizontal(jug2_ficha,filaValida,filas,columnas,columnausuario,tablero);
                diago=comprobar_diagonal(jug2_ficha,filaValida,filas,columnas,columnausuario,tablero);
                empate=comprobar_empate(filas,columnas,tablero);

                if(empate==64){
                    break;
                }
                if ((hori==1) || (verti==1)||(diago==1)){
                    printf("Ganador Jugador %d", turno);
                    printf("....::: BIEN JUGADO :::....\n\n");

                   break;
                }
                else {
                    turno=1;
                    }
            }
        }
    printf("DESEAS JUGAR OTRA VEZ?? \n\n");
    printf(" .....:::'1' = SI       '2' = NO :::....");
    scanf("%d", &jugar);
    }
system("clear");


    if (opcionjuego==2){
        z=quien_parte();
        turno=z;
        printf("......::::Bievenido a la modalidad de juego 1 vs CPU :::.......\n\n");
        if(z==1){
            printf("Parte el Jugador 1 tirando \n");
        }
        else{
            printf("Parte la CPU jugando \n");
        }

        while(ganador==0){
            if(turno==1){

                printf("Jugador %d, ingrese en que columna insertara su ficha \n",turno);
                scanf("%d", &columnausuario);
                columnausuario--;
            system("clear");
                while((columnausuario>7) || (columnausuario<0)){
                    printf("Columna no valida, ingrese nuevamente \n");
                    scanf("%d",& columnausuario);
                    columnausuario--;
                    break;
                }
                filaValida = validar_fila(filas, columnas,columnausuario,tablero);

                posicionar_ficha(filas, filaValida, columnas , columnausuario, tablero, jug1_ficha);
                imprimir(filas, columnas, tablero);

                hori=comprobar_horizontal(jug1_ficha,filaValida,filas,columnas,columnausuario,tablero);
                verti= comprobar_vertical(jug1_ficha,filaValida,filas,columnas,columnausuario,tablero);
                diago=comprobar_diagonal(jug1_ficha,filaValida,filas,columnas,columnausuario,tablero);
                empate=comprobar_empate(filas,columnas,tablero);

                if(empate==64){
                    break;
                }

                if ((hori==1) || (verti==1)||(diago==1)){
                 printf("Ganador Jugador %d", turno);
                 printf("....::: BIEN JUGADO :::....\n\n");

                 break;

                }
                else{
                    turno=2;
                }
            }

            if(turno==2){

                columnausuario= turno_Cpu();
                columnausuario--;
                system("clear");

                filaValida = validar_fila(filas, columnas,columnausuario,tablero);
                posicionar_ficha(filas, filaValida, columnas, columnausuario, tablero, jug2_ficha);
                imprimir(filas, columnas, tablero);
                verti=comprobar_vertical(jug2_ficha,filaValida,filas,columnas,columnausuario,tablero);
                hori=comprobar_horizontal(jug2_ficha,filaValida,filas,columnas,columnausuario,tablero);
                diago=comprobar_diagonal(jug2_ficha,filaValida,filas,columnas,columnausuario,tablero);
                empate=comprobar_empate(filas,columnas,tablero);

                if(empate==64){
                    break;
                }

                if ((hori==1) || (verti==1)||(diago==1)){
                    printf("HA GANADO LA CPU \n");
                    printf("....::: HAS PERDIDO, MAS SUERTE LA PROXIMA VEZ:::..... \n\n");
                    printf("....::: BIEN JUGADO :::....\n\n");
                    jugar=0;
                    break;
                }
                else{
                    turno=1;
                }
                }
        }

        printf("DESEAS JUGAR OTRA VEZ?? \n\n");
    printf(" .....:::'1' = SI       '2' = NO :::....");
    scanf("%d", &jugar);

    }
    system("clear");
}
    return 0;
}
