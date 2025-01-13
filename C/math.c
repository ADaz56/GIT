/****** Module manipulant des fonctions mathématiques **********/
#include "math.h"
/****************** Recherche du maximum ***********************/
float maximum (float n1, float n2 )
{
   if (n1>n2){
	   return n1;
	   }
	else {
		return n2;
	}
}
/****************** Recherche du minimum ***********************/
float minimum (float n1, float n2 )
{
	if (n1>n2){
	   return n2;
	   };
	else {
		return n1;
	};
}
/******************* Addition de nombres ***********************/
float addition (float n1, float n2 )
{
	int nb = n1 + n2;
	return nb;
}
