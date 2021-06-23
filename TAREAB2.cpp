//PARTE DE GARCIA WILA MELANIE
#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
	int opcion;
	bool repetir = true;
	
	do {
	        system("cls");//limpia pantalla
	        
		cout << "\n\nMenu de Opciones" << endl;
	        cout << "1. Creacion de  Matriz            1" << endl;
	        cout << "2. Suma de 2 Matrices             2" << endl;
	        cout << "3. Resta de 2 Matrices            3" << endl;
	        cout << "4. Multiplicacion de 2 Matrices   4" << endl;
	        cout << "5. Divicion de 2 Matrices         5" << endl;
	        cout << "0. SALIR" << endl;
	        
	        cout << "\nIngrese una opcion: ";
	        cin >> opcion;
			
			switch (opcion) 
			{
		            case 1:{
		            	int numeros[100][100], filas, columnas;
						cout<<"Digite el numero de filas: ";
						cin>>filas;
						cout<<"Digite el numero de columnas: ";
						cin>>columnas;
						//Almacenamos elementos en la matriz
						for(int i=0;i<filas;i++){
						for(int j=0;j<columnas;j++){
						cout<<"digite un numero en la posicion  ["<<i<<"]["<<j<<"]: ";
						cin>>numeros[i][j];
								}
				
						}		
						for(int i=0;i<filas;i++){
						for(int j=0;j<columnas;j++){
						cout<<numeros[i][j];
					
						}
						cout<<endl;
						}
						 system("pause>nul"); // Pausa 
						break;
					}
		            	
		             // PARTE DE CONTRERAS MONTAÑO LUIS MIGUEL   
		            case 2:{
		            	int  filas2, columnas2;
						cout<<"Digite el numero de filas: ";
						cin>>filas2;
						cout<<"Digite el numero de columnas: ";
						cin>>columnas2;
						
						int A[filas2][columnas2],B[filas2][columnas2],C[filas2][columnas2];
						//Almacenamos elementos en la matriz
						cout<<endl<<"MATRIZ 1 :";
						for(int i=0;i<filas2;i++){
						for(int j=0;j<columnas2;j++){
						cout<<"digite un numero en la MATRIZ 1 posicion  ["<<i<<"]["<<j<<"]: ";
						cin>>A[i][j];
							}
						}		
						
						cout<<endl<<"MATRIZ 2 :";
						for(int i=0;i<filas2;i++){
						for(int j=0;j<columnas2;j++){
						cout<<"digite un numero en la MATRIZ 2 posicion  ["<<i<<"]["<<j<<"]: ";
						cin>>B[i][j];
							}
						}
						
						//PROSESO DE SUMA 
						for(int i=0;i<filas2;i++){
						for(int j=0;j<columnas2;j++){
						C[i][j]=A[i][j]+B[i][j];
							}
						}
						
						for(int i=0;i<filas2;i++){
						for(int j=0;j<columnas2;j++){
						cout<<C[i][j];
							}
						cout<<endl;
						}
						 system("pause>nul"); // Pausa 
						break;
					}
					
		            case 3:{
		            	 int  filas2, columnas2;
						cout<<"Digite el numero de filas: ";
						cin>>filas2;
						cout<<"Digite el numero de columnas: ";
						cin>>columnas2;
						
						int A[filas2][columnas2],B[filas2][columnas2],C[filas2][columnas2];
						//Almacenamos elementos en la matriz
						cout<<endl<<"MATRIZ 1 :";
						for(int i=0;i<filas2;i++){
						for(int j=0;j<columnas2;j++){
						cout<<"digite un numero en la MATRIZ 1 posicion  ["<<i<<"]["<<j<<"]: ";
						cin>>A[i][j];
							}
						}		
						
						cout<<endl<<"MATRIZ 2 :";
						for(int i=0;i<filas2;i++){
						for(int j=0;j<columnas2;j++){
						cout<<"digite un numero en la MATRIZ 2 posicion  ["<<i<<"]["<<j<<"]: ";
						cin>>B[i][j];
							}
						}
						
						//PROSESO DE RESTA 
						for(int i=0;i<filas2;i++){
						for(int j=0;j<columnas2;j++){
						C[i][j]=A[i][j]-B[i][j];
							}
						}
						
						for(int i=0;i<filas2;i++){
						for(int j=0;j<columnas2;j++){
						cout<<C[i][j];
							}
						cout<<endl;
						}
						 system("pause>nul"); // Pausa 
						break;
					}
		                
		                
		            case 4:{
		            	  int  filas2, columnas2;
						cout<<"Digite el numero de filas: ";
						cin>>filas2;
						cout<<"Digite el numero de columnas: ";
						cin>>columnas2;
						
						int A[filas2][columnas2],B[filas2][columnas2],C[filas2][columnas2];
						//Almacenamos elementos en la matriz
						cout<<endl<<"MATRIZ 1 :";
						for(int i=0;i<filas2;i++){
						for(int j=0;j<columnas2;j++){
						cout<<"digite un numero en la MATRIZ 1 posicion  ["<<i<<"]["<<j<<"]: ";
						cin>>A[i][j];
							}
						}		
						
						cout<<endl<<"MATRIZ 2 :";
						for(int i=0;i<filas2;i++){
						for(int j=0;j<columnas2;j++){
						cout<<"digite un numero en la MATRIZ 2 posicion  ["<<i<<"]["<<j<<"]: ";
						cin>>B[i][j];
							}
						}
						
						//PROSESO DE multiplicacion 
						for(int i=0;i<filas2;i++){
						for(int j=0;j<columnas2;j++){
						C[i][j]=A[i][j]*B[i][j];
							}
						}
						
						for(int i=0;i<filas2;i++){
						for(int j=0;j<columnas2;j++){
						cout<<C[i][j];
							}
						cout<<endl;
						}
		            	 system("pause>nul"); // Pausa 
						break;
					}
		                
		            case 5:{
		            	 int  filas2, columnas2;
						cout<<"Digite el numero de filas: ";
						cin>>filas2;
						cout<<"Digite el numero de columnas: ";
						cin>>columnas2;
						
						float A[filas2][columnas2],B[filas2][columnas2],C[filas2][columnas2];
						//Almacenamos elementos en la matriz
						cout<<endl<<"MATRIZ 1 :";
						for(int i=0;i<filas2;i++){
						for(int j=0;j<columnas2;j++){
						cout<<"digite un numero en la MATRIZ 1 posicion  ["<<i<<"]["<<j<<"]: ";
						cin>>A[i][j];
							}
						}		
						
						cout<<endl<<"MATRIZ 2 :";
						for(int i=0;i<filas2;i++){
						for(int j=0;j<columnas2;j++){
						cout<<"digite un numero en la MATRIZ 2 posicion  ["<<i<<"]["<<j<<"]: ";
						cin>>B[i][j];
							}
						}
						
						//PROSESO DE DIVICION 
						for(int i=0;i<filas2;i++){
						for(int j=0;j<columnas2;j++){
						C[i][j]=A[i][j]/B[i][j];
							}
						}
						
						for(int i=0;i<filas2;i++){
						for(int j=0;j<columnas2;j++){
						cout<<C[i][j];
							}
						cout<<endl;
						}
		            	
		            	 system("pause>nul"); // Pausa 
						break;
					}
					
		            case 0:{
		            	repetir = false;
						break;
					}
	        }      
	} while (repetir);
	
	system("pause");
	return 0; 
}
