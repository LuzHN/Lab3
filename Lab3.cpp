#include <iostream>

using namespace std;


int main(){
	int opcion = 0;
	

	while(opcion >= 0 && opcion < 4){
		cout << "Ingrese opcion:"<< endl << "1. Ej. 1."<< 
					endl << "2. Ej2. " << endl << "3. Ej3."<< 
					endl << "4. Salir.";
		cout << endl;
		cin >> opcion;
		switch(opcion){
			case 1:{
				
				int arr[] = {1, 2, 3, 4, 5, 6, 7};
				int dias = 0;
				cout << endl << endl;

				int esbisiesto = 0;

				int diaespecifico = 0;
				int domingos = 0;
				int quedia = 0;


				for (int i = 1; i < 100; ++i){
					esbisiesto++;
					
					for (int j = 1; j <= 12; ++j){

						if(diaespecifico == 6){
							domingos++;
						}
		
						if(j == 2){
							if(esbisiesto == 4){
								esbisiesto = 0;
								for (int t = 0; t < 29; ++t){
									diaespecifico = arr[quedia];
									quedia++;

									if(quedia == 7){
										quedia = 0;
									}
								}
							} 
							else{
								for (int k = 0; k < 28; ++k){
									diaespecifico = arr[quedia];
									quedia++;

									if(quedia == 7){
										quedia = 0;
									}
							}	}
						} else{
							if(j == 4 || j == 6 || j == 9 || j == 11){
								for (int i = 0; i < 30; ++i)
								{
									diaespecifico = arr[quedia];
									quedia++;

									if(quedia == 7){
										quedia = 0;
									}
								}
							} else{

								for (int i = 0; i < 31; ++i)
								{
									
									diaespecifico = arr[quedia];
									quedia++;

									if(quedia == 7){
										quedia = 0;
									}

								}
							}
						}
						
					}


				}
				cout << endl << "El numero de domingos es: " << domingos << endl;
				

				break;
			}
			case 2:{
				int gradopoli = 0;
				cout << "Ingrese el grado mas alto del polinomio: ";
				cin >> gradopoli;

				int arrcoef[gradopoli];

				for (int i = gradopoli; i >= 0; --i)
				{
					cout<< "Ingrese el coeficiente de X^"<< i << " : ";
					cin >> arrcoef[i];
					cout << endl;

				}

				/*
				for (int i = gradopoli; i >= 0; --i)
				{
					cout << endl << arrcoef[i];
				}
				*/

				int matriz[2][gradopoli + 1];


				for (int i = 0; i < 3; ++i)
				{
					for (int j = 0; j < gradopoli + 1; ++j)
					{
						matriz[i][j] = 0;
					}
				}

				
				for (int i = 0; i < gradopoli + 1; ++i)
				{
					matriz[0][i] = arrcoef[gradopoli - i];
				}

				/*for (int i = 0; i < 3; ++i)
				{
					for (int j = 0; j < gradopoli + 1; ++j)
					{
						cout<< matriz[i][j] << " ";
					}
					cout << endl;
				}
				*/

				int a = 0;
				cout << "Ingrese a: ";
				cin >> a;

				matriz[2][0] =	matriz[0][0] * a;


				for (int i = 0; i <= gradopoli + 1; ++i)
				{

					for (int j = 0; j < 2; ++j)
					{
						matriz[i + 1][j + 1] = matriz[2][i] * a;
	

						matriz[2][i + 1] = matriz[i + 1][j +1] + matriz[0][i + 1];
						
					}

					for (int i = 0; i < 3; ++i)
					{
						if(i == 2){
						cout<< "-------------" << endl;
						}
						for (int j = 0; j < gradopoli + 1; ++j)
						{
							cout<< matriz[i][j] << " ";
							if(j == gradopoli){
								cout<< "| ";
							}
							if(j == gradopoli && i == 0){
								cout<< a;
							}
						}
						cout<<endl;
					}
					cout<< endl << endl;
				}

				

				

				break;
			}
			case 3:{

				int num[4];
				
				for (int i = 0; i < 4; ++i){
					cout<<"Ingrese numero" << i << " :" ;
					cin>>num[i];
				}
				cout<<num[0]<<num[1]<<num[2]<<num[3]<<endl;
				cout<<num[0]<<num[1]<<num[3]<<num[2]<<endl;
				cout<<num[0]<<num[2]<<num[3]<<num[1]<<endl;
				cout<<num[0]<<num[2]<<num[1]<<num[3]<<endl;
				cout<<num[0]<<num[3]<<num[1]<<num[2]<<endl;
				cout<<num[0]<<num[3]<<num[2]<<num[1]<<endl;

				cout<<num[1]<<num[2]<<num[3]<<num[0]<<endl;
				cout<<num[1]<<num[2]<<num[0]<<num[3]<<endl;
				cout<<num[1]<<num[3]<<num[0]<<num[2]<<endl;
				cout<<num[1]<<num[3]<<num[2]<<num[0]<<endl;
				cout<<num[1]<<num[0]<<num[2]<<num[3]<<endl;
				cout<<num[1]<<num[0]<<num[3]<<num[2]<<endl;

				cout<<num[2]<<num[3]<<num[0]<<num[1]<<endl;
				cout<<num[2]<<num[3]<<num[1]<<num[0]<<endl;
				cout<<num[2]<<num[0]<<num[1]<<num[3]<<endl;
				cout<<num[2]<<num[0]<<num[3]<<num[1]<<endl;
				cout<<num[2]<<num[1]<<num[0]<<num[3]<<endl;
				cout<<num[2]<<num[1]<<num[3]<<num[0]<<endl;

				cout<<num[3]<<num[0]<<num[1]<<num[2]<<endl;
				cout<<num[3]<<num[0]<<num[2]<<num[1]<<endl;
				cout<<num[3]<<num[1]<<num[2]<<num[0]<<endl;
				cout<<num[3]<<num[1]<<num[0]<<num[2]<<endl;
				cout<<num[3]<<num[2]<<num[0]<<num[1]<<endl;
				cout<<num[3]<<num[2]<<num[1]<<num[0]<<endl;
		

				
			}
		}
	}
	return 0;
}
