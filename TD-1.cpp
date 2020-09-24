//TD 1 LANGAGE AVANCEE

#include <iostream>
#include <cstring>
using namespace std;

void exo1_1(int taille)
{
	int T[taille];
	int* p=T;

	for (int i = 0; i < taille; ++i) // intialisation du tableau 
	{
		*(p+i)=i+1;
	}

	cout<<"voila le parcours du tableau : \n";
	for (int i = 0; i < taille; ++i) //affichage du tableau
	{
		cout<<p[i]<<endl;
	}
}

void exo1_2()
{
	char* tab[3]; // allocation de la mémoire 

	/* VERSION 2 
		char** tab=new char* [3]; // allocation de la mémoire 
	*/

	for (int i = 0; i < 3; ++i)
	{		
		tab[i]= new char[strlen("machin")+1]; // allocation de la mémoire 
	}
	strcpy(tab[0],"machin");
	strcpy(tab[1],"truc");
	strcpy(tab[2],"objet");

	for (int i = 0; i < 3; ++i) // affichahge du tableau de chaine de caractéres
	{
		cout<<tab[i]<<endl;
	}

	for (int i = 0; i < 3; ++i) // désallocation de la mémoire 
	{
		delete tab[i];
	}
}

void exo2(int &a,int &b) 
{
	int c=a;
	a=b;
	b=c;
}
void remplirTab(int* tab,int taille)
{
	for(int i=0;i<taille;i++)
	{
		tab[i]=i;
	}
}

int main ()
{	
	/*const int n=2;
	int tab[n];
	remplirTab(tab,n);
	for(int i=0;i<n;i++)
	{
		cout<<tab[i]<<"\n";
	}	*/

	//exo1_1(10);

	//exo1_2();
	
	/*int a=1,b=3;

	exo2(a,b);
	cout<<"a : "<<a<<" b : "<<b<<endl;
	*/




}
