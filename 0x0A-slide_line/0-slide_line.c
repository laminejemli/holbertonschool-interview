# inclure  " slide_line.h "

/* *
* slide_line - glisser et fusionner des entiers dans un tableau donné s'ils sont identiques
* les nombres et sont soit contigus soit séparés par des zéros
* @line : tableau d'entiers donné
* @size : nombre d'éléments dans le tableau
* @direction : direction, définie par la macro SLIDE_LEFT ou SLIDE_RIGHT passée pour
* glissement nécessaire
*
* Retour : 1 en cas de succès ou 0 en cas d'échec
 */

int  slide_line ( int *line, size_t size, int direction)
{
	drapeau entier = 0 ;

	si (taille < 1 || (direction != SLIDE_LEFT && direction != SLIDE_RIGHT))
	{
		retour (drapeau);
	}
	si (sens == SLIDE_LEFT)
	{
		flag = func_slide_left (ligne, taille);
	}
	si (sens == SLIDE_RIGHT)
	{
		flag = func_slide_right (ligne, taille);
	}
	retour (drapeau);
}
/* *
* func_slide_left - lorsque la direction est à gauche, glisse et fusionne
* @line : tableau d'ints donné à lire comme une ligne
* @size : nombre d'éléments dans le tableau
* Retour : 1 en cas de succès, 0 en cas d'échec
*/
	int  func_slide_left ( int *ligne, taille_t taille)
	{
		int je, j, drapeau = 0 ;
		je = 0 ;
		pour (j = 1 ; j < ( int )taille ;)
		{
			si (ligne[j] == 0 )
			{
				j++;
				continuer ;
			}
			si (ligne[i] == ligne[j])
			{
				ligne[i] += ligne[j] ;
				ligne[j] = 0 ;
				drapeau = 1 ;
				je++ ;
				j++;
			}
			sinon  si (ligne[i] != ligne[j])
			{
				si (ligne[i] == 0 )
				{
					ligne[i] += ligne[j] ;
					ligne[j] = 0 ;
					drapeau = 1 ;
					j++;
				}
				autre
				{
					je++ ;
					si (je != j)
					{
						ligne[i] += ligne[j] ;
						ligne[j] = 0 ;
						drapeau = 1 ;
					}
					j++;
				}
			}
		}
		retour (drapeau);
	}

/* *
* func_slide_right - direction donnée, glisse et fusionne les entiers dans le tableau
* @line : tableau d'ints donné dans une ligne
* @size : nombre d'éléments dans le tableau
* Retour : 1 en cas de succès, 0 en cas d'échec
*/
	int  func_slide_right ( int *ligne, taille_t taille)
	{
		int je, j, drapeau = 0 ;
		je = (( int )taille - 1 );
		pour (j = (( int )taille - 2 ); j ​​>= 0 ;)
		{
			si (ligne[j] == 0 )
			{
				j-- ;
				continuer ;
			}
			si (ligne[i] == ligne[j])
			{
				ligne[i] += ligne[j] ;
				ligne[j] = 0 ;
				drapeau = 1 ;
				je--;
				j-- ;
			}
			sinon  si (ligne[i] != ligne[j])
			{
				si (ligne[i] == 0 )
				{
					ligne[i] += ligne[j] ;
					ligne[j] = 0 ;
					drapeau = 1 ;
					j-- ;
				}
				autre
				{
					je--;
					si (je != j)
					{
						ligne[i] += ligne[j] ;
						ligne[j] = 0 ;
						drapeau = 1 ;
					}
					j-- ;
				}
			}
		}
		retour (drapeau);
	}
