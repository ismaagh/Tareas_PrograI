#include <stdio.h>
#include <cstdlib>

int main(){
	
	char matriz[3][3];
	char opcion;
	int fila, columna, ganador = 0, turno = 1;
	
	
	
	for(int i = 1; i<=3; i++){  //Creacion de la matriz
		for (int j = 1; j <= 3; j++){
			matriz[ i ][ j ] = ' ';
			printf("[%c]", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("Juego del Gato o Tres en Raya \n");
	printf("Presione Y para jugar / N para salir: ");
	scanf("%c",&opcion);
	
	if(opcion == 'Y' || opcion == 'y'){
		
		do{
			if(turno % 2 == 1){ 
			do{
					printf("Jugador 1(Usaras la x): \n");
				printf("Digite fila: ");
				scanf("%d",&fila);
				printf("Digite columna : ");
				scanf("%d",&columna);
				
				if(matriz[fila][columna] == 'x' || matriz[fila][columna] == 'o'){ //Si el usuario quiere usar un espacio usado
					printf("Ese espacio ya fue usado, usa otra coordenada.\n");
				} if(matriz[fila][columna] == 'o' || fila > 3 || columna > 3){ // si el usuario una un espacio fuera del rango
					printf("Usaste unas coordenadas fuera del rango [1,3].\n");
				}	
			}while(matriz[fila][columna] == 'x' || matriz[fila][columna] == 'o' || fila > 3 || columna > 3);
			
			matriz[fila][columna]='x';
			
			system("cls");
			for(int i = 1; i<=3; i++){
				for (int j = 1; j <= 3; j++){
					printf("[%c]", matriz[i][j]);
			}
			printf("\n");
		} 
	
		turno ++;
	} else if (turno % 2 == 0){
		
		do{
				printf("Jugador 2 (Usaras la o): \n");
				printf("Digite fila: ");
				scanf("%d",&fila);
				printf("Digite columna: ");
				scanf("%d",&columna);
				
				if(matriz[fila][columna] == 'x' || matriz[fila][columna] == 'o'){
					printf("Ese espacio ya fue usado, usa otra coordenada.\n");
				} if(matriz[fila][columna] == 'o' || fila > 3 || columna > 3){
					printf("Usaste unas coordenadas fuera del rango [1,3].\n");
				}	
			}while(matriz[fila][columna] == 'x' || matriz[fila][columna] == 'o'|| fila > 3 || columna > 3);
			
			
			matriz[fila][columna]='o';
			
			system("cls");
			for(int i = 1; i<=3; i++){
				for (int j = 1; j <= 3; j++){
					printf("[%c]", matriz[i][j]);
				}
				printf("\n");
			}
			turno ++;	
		} 
		

			if( (matriz[1][1] == 'x' && matriz[1][1] == matriz[1][2] && matriz[1][1] == matriz[1][3]) || // Fila 1
			    (matriz[2][1] == 'x' && matriz[2][1] == matriz[2][2] && matriz[2][1] == matriz[2][3]) || // Fila 2
			    (matriz[3][1] == 'x' && matriz[3][1] == matriz[3][2] && matriz[3][1] == matriz[3][3]) || // Fila 3
			    
			    (matriz[1][1] == 'x' && matriz[1][1] == matriz[2][1] && matriz[1][1] == matriz[3][1]) || // Columna 1
			    (matriz[1][2] == 'x' && matriz[1][2] == matriz[2][2] && matriz[1][2] == matriz[3][2]) || // Columna 2
			    (matriz[1][3] == 'x' && matriz[1][3] == matriz[2][3] && matriz[1][3] == matriz[3][3]) || // Columna 3
			    
			    (matriz[1][1] == 'x' && matriz[1][1] == matriz[2][2] && matriz[1][1] == matriz[3][3]) || // Diagonal principal
			    (matriz[1][3] == 'x' && matriz[1][3] == matriz[2][2] && matriz[1][3] == matriz[3][1])   // Diagonal secundaria
			){
			    ganador = 1;
			    printf("Felicidades gano el Jugador 1!!!!.");
			}
			
			if( (matriz[1][1] == 'o' && matriz[1][1] == matriz[1][2] && matriz[1][1] == matriz[1][3]) || // Fila 1
			    (matriz[2][1] == 'o' && matriz[2][1] == matriz[2][2] && matriz[2][1] == matriz[2][3]) || // Fila 2
			    (matriz[3][1] == 'o' && matriz[3][1] == matriz[3][2] && matriz[3][1] == matriz[3][3]) || // Fila 3
			    
			    (matriz[1][1] == 'o' && matriz[1][1] == matriz[2][1] && matriz[1][1] == matriz[3][1]) || // Columna 1
			    (matriz[1][2] == 'o' && matriz[1][2] == matriz[2][2] && matriz[1][2] == matriz[3][2]) || // Columna 2
			    (matriz[1][3] == 'o' && matriz[1][3] == matriz[2][3] && matriz[1][3] == matriz[3][3]) || // Columna 3
			    
			    (matriz[1][1] == 'o' && matriz[1][1] == matriz[2][2] && matriz[1][1] == matriz[3][3]) || // Diagonal principal
			    (matriz[1][3] == 'o' && matriz[1][3] == matriz[2][2] && matriz[1][3] == matriz[3][1])   // Diagonal secundaria
			){
			    ganador=1;
			    printf("\nFelicidades! Gano el jugador 2.\n");
			}
		int espacios_vacios = 0;
            for(int i = 1; i<=3; i++){
                for (int j = 1; j <= 3; j++){
                    if(matriz[i][j] == ' '){
                        espacios_vacios = 1; // Si encontramos un espacio, no hay empate.
                        break;
                    }
                }
                if (espacios_vacios == 1) break;
            }

            // Si nadie gano (ganador sigue siendo 0) Y NO hay espacios vacios
            if(ganador != 1 && espacios_vacios == 0){
                ganador = 1; // Fija ganador=1 para salir del bucle
                system("cls");
                // Redibujar el tablero final
                for(int i = 1; i<=3; i++){
                    for (int j = 1; j <= 3; j++){
                        printf("[%c]", matriz[i][j]);
                    }
                    printf("\n");
                }
                printf("\nEmpate! El tablero esta lleno y nadie gano.\n");
            }
	
		}while(ganador != 1);
		
		
		
	}else{
		system("cls");
		printf("\n De todas formas no queria que jugaras");
	}		
	return 0;
}
