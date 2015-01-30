#include <iostream.h>
#include <conio.h>
#include <fstream.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void Generar(int v[], int p, int x)     //genera las tablas con n variables
{
	int bt;
   int per = p / x;
   int k = 0;                        //un contador adicional para que vaya contando si pertenece al periodo
   for(int i = 0; i < x; i++)
   {
   	for(int j = 1; j <= per; j++)
      {
         if (i % 2 == 0)
         {
         	bt = 1;
         }
         else
         {
         	bt = 0;
         }
         v[k] = bt;
         k++;
      }
   }
}


void IMPRIMIR3(int a[], int b[], int c[])     //Imprime la tabla con dos vectores
{
	int i, n = 4;

   cout<<"A B | S"<<'\n';
   cout<<"----|--"<<"\n";
	for( i = 0; i < n; i++)
   {
   	cout<<a[i]<<" "<<b[i]<<" | "<<c[i]<<'\n';
   }
}

void IMPRIMIRNOT(int b[], int c[])         //imprime la tabla de negacion
{
	int i, n = 2;
   cout<<"A | S"<<'\n';
  	cout<<"--|--"<<"\n";
	for( i = 0; i < n; i++)
   {
   	cout<<b[i]<<" | "<<c[i]<<'\n';
   }
}

void AND(int a[], int b[], int c[])          //Calculo de la funcion AND
{
   int i, n = 4;
   for( i = 0; i < n; i++)
   {
      if(a[i] == 1 && b[i] == 1)
   	{
	   	c[i] = 1;
   	}
      else
      {
      	c[i] = 0;
      }
   }
}

void OR(int a[], int b[], int c[])            //Calculo de la funcion OR
{
   int i, n = 4;
   for( i = 0; i < n; i++)
   {
      if(a[i] == 0 && b[i] == 0)
   	{
	   	c[i] = 0;
   	}
      else
      {
      	c[i] = 1;
      }
   }
}

void NOT(int b[], int c[])               //Calculo de la funcion NOT
{
   int i, n = 2;
   for( i = 0; i < n; i++)
   {
      if(b[i] == 0)
   	{
	   	c[i] = 1;
   	}
      else
      {
      	c[i] = 0;
      }
   }
}

void XOR(int a[], int b[], int c[])              //Calculo de la funcion XOR
{
   int i, n = 4;
   for( i = 0; i < n; i++)
   {
      if(a[i] ==  b[i])
   	{
	   	c[i] = 0;
   	}
      else
      {
      	c[i] = 1;
      }
   }
}

void NOR(int a[], int b[], int c[])         //Calculo de la funcion NOR
{
   int i, n = 4;
   for( i = 0; i < n; i++)
   {
      if(a[i] == 0 && b[i] == 0)
   	{
	   	c[i] = 1;
   	}
      else
      {
      	c[i] = 0;
      }
   }
}

void NAND(int a[], int b[], int c[])              //Calculo de la funcion NAND
{
   int i, n = 4;
   for( i = 0; i < n; i++)
   {
      if(a[i] == 1 && b[i] == 1)
   	{
	   	c[i] = 0;
   	}
      else
      {
      	c[i] = 1;
      }
   }
}

void XNOR(int a[], int b[], int c[])          //Calculo de la funcion XNOR
{
   int i, n = 4;
   for( i = 0; i < n; i++)
   {
      if(a[i] ==  b[i])
   	{
	   	c[i] = 1;
   	}
      else
      {
      	c[i] = 0;
      }
   }
}

void AND3(int a[], int b[], int c[], int s[])          //Calculo de la funcion AND
{
   int i, n = 8;
   for( i = 0; i < n; i++)
   {
      s[i] = a[i] & b[i] & c[i];
   }
}

void OR3(int a[], int b[], int c[], int s[])            //Calculo de la funcion OR
{
   int i, n = 8;
   for( i = 0; i < n; i++)
   {
      s[i] = a[i] | b[i] | c[i];
   }
}

void NOR3(int a[], int b[], int c[], int s[])         //Calculo de la funcion NOR
{
   int i, n = 8;
   for( i = 0; i < n; i++)
   {
      s[i] = !(a[i] | b[i] | c[i]);
   }
}

void NAND3(int a[], int b[], int c[], int s[])              //Calculo de la funcion NAND
{
   int i, n = 8;
   for( i = 0; i < n; i++)
   {
   	s[i] = !(a[i] & b[i] & c[i]);
   }
}

void AND4(int a[], int b[], int c[], int d[], int s[])          //Calculo de la funcion AND
{
   int i, n = 16;
   for( i = 0; i < n; i++)
   {
      s[i] = a[i] & b[i] & c[i] & d[i];
   }
}

void OR4(int a[], int b[], int c[], int d[], int s[])            //Calculo de la funcion OR
{
   int i, n = 16;
   for( i = 0; i < n; i++)
   {
      s[i] = a[i] | b[i] | c[i] | d[i];
   }
}

void NOR4(int a[], int b[], int c[], int d[], int s[])         //Calculo de la funcion NOR
{
   int i, n = 16;
   for( i = 0; i < n; i++)
   {
      s[i] = !(a[i] | b[i] | c[i] | d[i]);
   }
}

void NAND4(int a[], int b[], int c[], int d[], int s[])    //Calculo de la funcion NAND
{
   int i, n = 16;
   for( i = 0; i < n; i++)
   {
   	s[i] = !(a[i] & b[i] & c[i] & d[i]);
   }
}

void AND5(int a[], int b[], int c[], int d[], int e[], int s[])          //Calculo de la funcion AND
{
   int i, n = 32;
   for( i = 0; i < n; i++)
   {
      s[i] = a[i] & b[i] & c[i] & d[i] & e[i];
   }
}

void OR5(int a[], int b[], int c[], int d[], int e[], int s[])            //Calculo de la funcion OR
{
   int i, n = 32;
   for( i = 0; i < n; i++)
   {
      s[i] = a[i] | b[i] | c[i] | d[i] | e[i];
   }
}

void NOR5(int a[], int b[], int c[], int d[], int e[], int s[])         //Calculo de la funcion NOR
{
   int i, n = 32;
   for( i = 0; i < n; i++)
   {
      s[i] = !(a[i] | b[i] | c[i] | d[i] | e[i]);
   }
}

void NAND5(int a[], int b[], int c[], int d[], int e[], int s[])    //Calculo de la funcion NAND
{
   int i, n = 32;
   for( i = 0; i < n; i++)
   {
   	s[i] = !(a[i] & b[i] & c[i] & d[i] & e[i]);
   }
}


void ARCHIVO()   //funcion para generar las tablas en un archivo
{

	ofstream archivo("C:/Users/SYSTEMARKET/Documents/GitHub/ARCHIVO/ArchivoTablas.txt");
   archivo<<"\t\tTABLA DE LAS COMPUERTAS LOGICAS";
   archivo<<'\n';
   cout<<"El archivo fue almacenado en la direccion C:/Users/SYSTEMARKET/Documents/GitHub/ARCHIVO con el nombre de ArchivoTablas.txt"<<"\n\n";
   cout<<'\n';
   cout<<"Las tablas han sido generadas y almacenadas en el archivo...dirijase a al directorio para que pueda visualizar"<<"\n\n";

	int i, n = 4, t, a[4], b[4], c[4];
   a[0] = 1;
   a[1] = 1;
   a[2] = 0;
   a[3] = 0;

   b[0] = 1;
   b[1] = 0;
   b[2] = 1;
   b[3] = 0;

   for( t = 1; t < 8; t++)
   {
   	 switch(t)
      {

      	case 1:
	         archivo<<"TABLA NOT"<<'\n';
   	      NOT(b, c);
      	   archivo<<'\n';
         	archivo<<"A | S"<<'\n';
         	archivo<<"--|--"<<"\n";
				for( i = 0; i < 2; i++)
		   	{
		   		archivo<<b[i]<<" | "<<c[i]<<'\n';
		   	}
         	archivo<<'\n';
         	break;

         case 2:
         	archivo<<"TABLA AND"<<'\n';
         	AND(a, b, c);
         	archivo<<'\n';
         	archivo<<"A B | S"<<'\n';
        		archivo<<"----|--"<<"\n";
				for( i = 0; i < n; i++)
			   {
   				archivo<<a[i]<<" "<<b[i]<<" | "<<c[i]<<'\n';
		   	}
         	archivo<<'\n';
         	break;

         case 3:
         	archivo<<"TABLA OR"<<'\n';
         	OR(a, b, c);
         	archivo<<'\n';
         	archivo<<"A B | S"<<'\n';
         	archivo<<"----|--"<<"\n";
				for( i = 0; i < n; i++)
		   	{
   				archivo<<a[i]<<" "<<b[i]<<" | "<<c[i]<<'\n';
		   	}
         	archivo<<'\n';
         	archivo<<'\n';
         	break;

         case 4:
         	archivo<<"TABLA NAND"<<'\n';
         	NAND(a, b, c);
         	archivo<<'\n';
            archivo<<"A B | S"<<'\n';
         	archivo<<"----|--"<<"\n";
         	for( i = 0; i < n; i++)
		   	{
   				archivo<<a[i]<<" "<<b[i]<<" | "<<c[i]<<'\n';
		   	}
         	archivo<<"\n\n";
         	break;

         case 5:
         	archivo<<"TABLA NOR"<<'\n';
         	NOR(a, b, c);
         	archivo<<'\n';
            archivo<<"A B | S"<<'\n';
         	archivo<<"----|--"<<"\n";
				for( i = 0; i < n; i++)
			   {
   				archivo<<a[i]<<" "<<b[i]<<" | "<<c[i]<<'\n';
			   }
         	archivo<<"\n\n";
         	break;

         case 6:
         	archivo<<"TABLA XOR"<<'\n';
         	XOR(a, b, c);
         	archivo<<'\n';
            archivo<<"A B | S"<<'\n';
         	archivo<<"----|--"<<"\n";
         	for( i = 0; i < n; i++)
			   {
   				archivo<<a[i]<<" "<<b[i]<<" | "<<c[i]<<'\n';
			   }
         	archivo<<"\n\n";
         	break;

         case 7:
	         archivo<<"TABLA XNOR"<<'\n';
   	      XNOR(a, b, c);
      	   archivo<<'\n';
            archivo<<"A B | S"<<'\n';
         	archivo<<"----|--"<<"\n";
         	for( i = 0; i < n; i++)
		   	{
   				archivo<<a[i]<<" "<<b[i]<<" | "<<c[i]<<'\n';
		   	}
         	archivo<<"\n\n";
         	break;
      }
   }

   archivo.close();
}


void DE_DOS_ENTRADAS(int a[], int b[], int c[])
{
	int n = 4, t;
   a[0] = 1;
   a[1] = 1;
   a[2] = 0;
   a[3] = 0;

   b[0] = 1;
   b[1] = 0;
   b[2] = 1;
   b[3] = 0;

   for( t = 1; t < 8; t++)
   {
   	 switch(t)
      {
      	case 1:
         	cout<<"TABLA NOT"<<'\n';
         	NOT(b, c);
         	cout<<'\n';
         	IMPRIMIRNOT(b,c);
         	cout<<'\n';
         	break;

         case 2:
    	     cout<<"TABLA AND"<<'\n';
      	   AND(a, b, c);
         	cout<<'\n';
         	IMPRIMIR3(a, b, c);
         	cout<<'\n';
         	break;
         case 3:
	         cout<<"TABLA OR"<<'\n';
   	      OR(a, b, c);
      	   cout<<'\n';
         	IMPRIMIR3(a, b, c);
         	cout<<'\n';
         	break;
         case 4:
	         cout<<"TABLA NAND"<<'\n';
   	      NAND(a, b, c);
	         cout<<'\n';
   	      IMPRIMIR3(a, b, c);
      	   cout<<'\n';
         	break;
         case 5:
	         cout<<"TABLA NOR"<<'\n';
   	      NOR(a, b, c);
      	   cout<<'\n';
         	IMPRIMIR3(a, b, c);
	         cout<<'\n';
   	      break;
         case 6:
	         cout<<"TABLA XOR"<<'\n';
   	      XOR(a, b, c);
      	   cout<<'\n';
         	IMPRIMIR3(a, b, c);
	         cout<<'\n';
   	      break;
         case 7:
	         cout<<"TABLA XNOR"<<'\n';
   	      XNOR(a, b, c);
      	   cout<<'\n';
         	IMPRIMIR3(a, b, c);
	         cout<<'\n';
   	      break;
      }
   }
}

void DE_N_ENTRADAS(void)
{
   int A[32], B[32], C[32], D[32], E[32], S[32];
   int n, entry, i;
   int f; //1. OR; 2. AND; 3. NOR; 4. NAND

	cout<<"Cuantas Entradas desea generar ( 3 - 5): ";
   cin>>n;
   cout<<"Cual funcion desea generar (1. OR; 2. AND; 3. NOR; 4. NAND): ";
	cin>>f;


	int p = pow(2,n);
	for (entry=1; entry<=n; entry++) //Para gererar entradas de la tabla
	{
		switch (entry)
		{
		  	case 1:
		     	Generar(A, p, 2);
		      break;
			case 2:
			   Generar(B, p, 4);
			   break;
         case 3:
			   Generar(C, p, 8);
			   break;
			case 4:
			   Generar(D, p, 16);
			   break;
         case 5:
			   Generar(E, p, 32);
			   break;
			default:
			 	cout<<"No existe correspondencia para tablas de mas de 5 entradas.";
		}
   }

	switch (n)    //Para generar salidas de la tabla e imprimir
	{
	   case 3:
	     	switch (f)
	      {
	        	case 1:
	        		OR3(A, B, C, S);
		         cout<<"Tabla OR de 3 entradas.\n\n";
		    		cout<<"A"<<" "<<"B"<<" "<<"C"<<" | "<<"S"<<"\n";
		     		cout<<"------|--"<<"\n";
		     		for (i = 0; i < p; i++)
					{
						cout<<A[i]<<" "<<B[i]<<" "<<C[i]<<" | "<<S[i]<<"\n";
					}
		         break;
		      case 2:
			      AND3(A, B, C, S);
			      cout<<"Tabla AND de 3 entradas.\n\n";
			   	cout<<"A"<<" "<<"B"<<" "<<"C"<<" | "<<"S"<<"\n";
			   	cout<<"------|--"<<"\n";
			   	for (i = 0; i < p; i++)
			   	{
			   		cout<<A[i]<<" "<<B[i]<<" "<<C[i]<<" | "<<S[i]<<"\n";
			   	}
			      break;
            case 3:
			     	NOR3(A, B, C, S);
			      cout<<"Tabla NOR de 3 entradas.\n\n";
			   	cout<<"A"<<" "<<"B"<<" "<<"C"<<" | "<<"S"<<"\n";
			   	cout<<"------|--"<<"\n";
			   	for (i = 0; i < p; i++)
			   	{
			   		cout<<A[i]<<" "<<B[i]<<" "<<C[i]<<" | "<<S[i]<<"\n";
			   	}
			      break;
            case 4:
            	NAND3(A, B, C, S);
               cout<<"Tabla NAND de 3 entradas.\n\n";
         		cout<<"A"<<" "<<"B"<<" "<<"C"<<" | "<<"S"<<"\n";
         		cout<<"------|--"<<"\n";
         		for (i = 0; i < p; i++)
   				{
   					cout<<A[i]<<" "<<B[i]<<" "<<C[i]<<" | "<<S[i]<<"\n";
   				}
               break;
            default:
            	cout<<"Opcion no valida.\n\n";
         }
	      break;

		case 4:
		   switch (f)
		   {
		     	case 1:
		    		OR4(A, B, C, D, S);
		         cout<<"Tabla OR de 4 entradas.\n\n";
		     		cout<<"A"<<" "<<"B"<<" "<<"C"<<" "<<"D"<<" | "<<"S"<<"\n";
		     		cout<<"--------|--"<<"\n";
		     		for (i = 0; i < p; i++)
					{
						cout<<A[i]<<" "<<B[i]<<" "<<C[i]<<" "<<D[i]<<" | "<<S[i]<<"\n";
					}
		         break;
		      case 2:
		         AND4(A, B, C, D, S);
		         cout<<"Tabla AND de 4 entradas.\n\n";
		    		cout<<"A"<<" "<<"B"<<" "<<"C"<<" "<<"D"<<" | "<<"S"<<"\n";
		     		cout<<"--------|--"<<"\n";
		     		for (i = 0; i < p; i++)
					{
						cout<<A[i]<<" "<<B[i]<<" "<<C[i]<<" "<<D[i]<<" | "<<S[i]<<"\n";
					}
		         break;
		      case 3:
			     	NOR4(A, B, C, D, S);
			      cout<<"Tabla NOR de 4 entradas.\n\n";
		     		cout<<"A"<<" "<<"B"<<" "<<"C"<<" "<<"D"<<" | "<<"S"<<"\n";
		     		cout<<"--------|--"<<"\n";
		     		for (i = 0; i < p; i++)
		 			{
		 				cout<<A[i]<<" "<<B[i]<<" "<<C[i]<<" "<<D[i]<<" | "<<S[i]<<"\n";
		 			}
               break;
		      case 4:
  			   	NAND4(A, B, C, D, S);
               cout<<"Tabla NAND de 4 entradas.\n\n";
  					cout<<"A"<<" "<<"B"<<" "<<"C"<<" "<<"D"<<" | "<<"S"<<"\n";
         		cout<<"--------|--"<<"\n";
  					for (i = 0; i < p; i++)
   				{
 						cout<<A[i]<<" "<<B[i]<<" "<<C[i]<<" "<<D[i]<<" | "<<S[i]<<"\n";
    				}
  			      break;
            default:
            	cout<<"Opcion no valida.\n\n";
 	      }
         break;
		case 5:
      	switch (f)
		   {
      		case 1:
		     		OR5(A, B, C, D, E, S);
      	      cout<<"Tabla OR de 5 entradas.\n\n";
		     		cout<<"A"<<" "<<"B"<<" "<<"C"<<" "<<"D"<<" "<<"E"<<" | "<<"S"<<"\n";
      			cout<<"--------|--"<<"\n";
		     		for (i = 0; i < p; i++)
   				{
   					cout<<A[i]<<" "<<B[i]<<" "<<C[i]<<" "<<D[i]<<" "<<E[i]<<" | "<<S[i]<<"\n";
					}
      	      break;
		      case 2:
  			      AND5(A, B, C, D, E, S);
               cout<<"Tabla AND de 5 entradas.\n\n";
  					cout<<"A"<<" "<<"B"<<" "<<"C"<<" "<<"D"<<" "<<"E"<<" | "<<"S"<<"\n";
         		cout<<"--------|--"<<"\n";
  					for (i = 0; i < p; i++)
	  				{
   					cout<<A[i]<<" "<<B[i]<<" "<<C[i]<<" "<<D[i]<<" "<<E[i]<<" | "<<S[i]<<"\n";
	  				}
   		      break;
	         case 3:
   		   	NOR5(A, B, C, D, E, S);
	            cout<<"Tabla NOR de 5 entradas.\n\n";
   				cout<<"A"<<" "<<"B"<<" "<<"C"<<" "<<"D"<<" "<<"E"<<" | "<<"S"<<"\n";
	        		cout<<"--------|--"<<"\n";
   				for (i = 0; i < p; i++)
	 				{
   					cout<<A[i]<<" "<<B[i]<<" "<<C[i]<<" "<<D[i]<<" "<<E[i]<<" | "<<S[i]<<"\n";
	  				}
   		      break;
	         case 4:
   		   	NAND5(A, B, C, D, E, S);
	            cout<<"Tabla NAND de 5 entradas.\n\n";
   				cout<<"A"<<" "<<"B"<<" "<<"C"<<" "<<"D"<<" "<<"E"<<" | "<<"S"<<"\n";
	       		cout<<"--------|--"<<"\n";
   				for (i = 0; i < p; i++)
	 				{
   					cout<<A[i]<<" "<<B[i]<<" "<<C[i]<<" "<<D[i]<<" "<<E[i]<<" | "<<S[i]<<"\n";
	 				}
               break;
            default:
            	cout<<"Opcion no valida.\n\n";
			}
         break;
		default:
      	cout<<"No existe correspondencia para tablas de mas de 5 entradas.";
   }
}


main()
{
   int a[5], b[5], c[5];
   char op;


   do
   {
	   cout<<"\t\tTABLA DE LAS COMPUERTAS LOGICAS"<<'\n';
   	cout<<"1.- Generar tablas de verdad con dos entradas."<<'\n';
	   cout<<"2.- Ver tablas de verdad con dos entradas."<<'\n';
   	cout<<"3.- Generar y ver tabla de verdad con n entradas."<<'\n';
	   cout<<"4.- Salir."<<'\n';
   	cout<<'\n';

	   cout<<"Que opcion desea realizar: ";
   	cin>>op;

	   switch(op)
   	{
	   	case '1':
   	   	ARCHIVO();
      		break;

	      case '2':
   	   	DE_DOS_ENTRADAS(a, b, c);
      		break;

         case '3':
            DE_N_ENTRADAS();
         	break;

         case '4':
	         cout<<"A pedido salir del programa.... El programa se cerrara";
   	      break;
	   }

      if (op > '4')
      {
      	cout<<'\n'<<"La opcion no existe... El programa se cerrara.";
      }

   }while( op < '4' && op > '0');




	getch();
}


