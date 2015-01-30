#include <iostream>
#include <conio>
#include <fstream>
#include <math>

void Generar(int v[], int p, int x)
{
	int bt;
   int per = p / x;
   int k = 0;
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

void IMPRIMIR3(int a[], int b[], int c[])
{
	int i, n = 4;

   cout<<"a b c"<<'\n';
	for( i = 0; i < n; i++)
   {
   	cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<'\n';
   }
}

void IMPRIMIRNOT(int b[], int c[])
{
	int i, n = 2;

   cout<<"a c"<<'\n';
	for( i = 0; i < n; i++)
   {
   	cout<<b[i]<<" "<<c[i]<<'\n';
   }
}

void AND(int a[], int b[], int c[])
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

void OR(int a[], int b[], int c[])
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

void NOT(int b[], int c[])
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

void XOR(int a[], int b[], int c[])
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

void NOR(int a[], int b[], int c[])
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

void NAND(int a[], int b[], int c[])
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

void XNOR(int a[], int b[], int c[])
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
void Caso_Uno()
{

	ofstream archivo("C:/Users/SYSTEMARKET/Documents/GitHub/ARCHIVO/Archivo_Tablas.txt");
   archivo<<"\t\tTABLA DE LAS COMPUERTAS LOGICAS";
   archivo<<'\n';
   cout<<"El archivo fue almacenado en la direccion C:/Users/SYSTEMARKET/Documents/GitHub/ARCHIVO con el nombre de Archivo_Tablas.txt"<<"\n\n";
   cout<<"Las tablas han sido generadas y almacenadas en el archivo"<<"\n\n";

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
         archivo<<"a c"<<'\n';
			for( i = 0; i < 2; i++)
		   {
		   	archivo<<b[i]<<" "<<c[i]<<'\n';
		   }
         archivo<<'\n';
         break;

         case 2:
         archivo<<"TABLA AND"<<'\n';
         AND(a, b, c);
         archivo<<'\n';
         archivo<<"a b c"<<'\n';
			for( i = 0; i < n; i++)
		   {
   			archivo<<a[i]<<" "<<b[i]<<" "<<c[i]<<'\n';
		   }
         archivo<<'\n';
         break;

         case 3:
         archivo<<"TABLA OR"<<'\n';
         OR(a, b, c);
         archivo<<'\n';
         archivo<<"a b c"<<'\n';
			for( i = 0; i < n; i++)
		   {
   			archivo<<a[i]<<" "<<b[i]<<" "<<c[i]<<'\n';
		   }
         archivo<<'\n';
         archivo<<'\n';
         break;

         case 4:
         archivo<<"TABLA NAND"<<'\n';
         NAND(a, b, c);
         archivo<<'\n';
         for( i = 0; i < n; i++)
		   {
   			archivo<<a[i]<<" "<<b[i]<<" "<<c[i]<<'\n';
		   }
         archivo<<'\n';
         break;

         case 5:
         archivo<<"TABLA NOR"<<'\n';
         NOR(a, b, c);
         archivo<<'\n';
			for( i = 0; i < n; i++)
		   {
   			archivo<<a[i]<<" "<<b[i]<<" "<<c[i]<<'\n';
		   }
         archivo<<'\n';
         break;

         case 6:
         archivo<<"TABLA XOR"<<'\n';
         XOR(a, b, c);
         archivo<<'\n';
         for( i = 0; i < n; i++)
		   {
   			archivo<<a[i]<<" "<<b[i]<<" "<<c[i]<<'\n';
		   }
         archivo<<'\n';
         break;

         case 7:
         archivo<<"TABLA XNOR"<<'\n';
         XNOR(a, b, c);
         archivo<<'\n';
         for( i = 0; i < n; i++)
		   {
   			archivo<<a[i]<<" "<<b[i]<<" "<<c[i]<<'\n';
		   }
         archivo<<'\n';
         break;
      }
   }

   archivo.close();
}

main()
{
	int a[4], b[4], c[4], n = 4;
   char t;
   a[0] = 1;
   a[1] = 1;
   a[2] = 0;
   a[3] = 0;

   b[0] = 1;
   b[1] = 0;
   b[2] = 1;
   b[3] = 0;


	cout<<"\t\tTABLA DE LAS COMPUERTAS LOGICAS"<<'\n';
   cout<<"Compuertas Logicas Basicas:"<<'\n';
   cout<<"1.- NOT"<<'\n';
   cout<<"2.- AND"<<'\n';
   cout<<"3.- OR"<<'\n';
   cout<<"Compuertas Logicas Complementarias:"<<'\n';
   cout<<"4.- NAND"<<'\n';
   cout<<"5.- NOR"<<'\n';
   cout<<"Compuertas Logicas Exclusivas:"<<'\n';
   cout<<"6.- XOR"<<'\n';
   cout<<"7.- XNOR";
   cout<<'\n';
   cout<<'\n';

   cout<<"Escoja la tabla que desee visualizar: ";
   cin>>t;
   cout<<'\n';

   	switch(t)
      {
      	case '1':
         NOT(b, c);
         IMPRIMIRNOT(b,c);

         break;

         case '2':
         AND(a, b, c);
         IMPRIMIR3(a, b, c);
         break;

         case '3':
         OR(a, b, c);
         IMPRIMIR3(a, b, c);
         break;

         case '4':
         NAND(a, b, c);
         IMPRIMIR3(a, b, c);
         break;

         case '5':
         NOR(a, b, c);
         IMPRIMIR3(a, b, c);
         break;

         case '6':
         XOR(a, b, c);
         IMPRIMIR3(a, b, c);
         break;

         case '7':
         XNOR(a, b, c);
         IMPRIMIR3(a, b, c);
         break;
      }


	getch();
}


