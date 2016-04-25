#include <stdio.h>

// Erzeugt Sternchen und Zeilennamen mit Nummern
void dostars(void);

//Macht das Arrayzeug und schaut sich das Größte an und gibt es Aus.
int array(void);

/*
Macht dasselbe wie Array() nur als eigene Funktion nur für den
Größenvergleich ohne Ausgabe des Array sondern mit Rückgabe.
*/
int maxArray(void);

int main(void)
{
    dostars();
    array();
    printf("\nMaximum: %d",maxArray());
    return 0;
}

/*
Schreiben Sie ein C-Programm, das folgende Ausgabe erzeugt.
Zeile 1: *********
Zeile 2: ********
Zeile 3: *******
Zeile 4: ******
Zeile 5: *****
Zeile 6: ****
Zeile 7: ***
Zeile 8: **
Zeile 9: *

*/
void dostars(void)
{
    int i;
    for (i=1; i<=9;i++)
     {
        printf("Zeile %d:",i);
        int j;
        for (j=9-i;j>=0;j--)
         {
             printf("*");
         }
         printf("\n");
     }
}

/*
Dann schreiben Sie eine weitere Funktion, die als lokale Variable ein Array
erwendet, das mit 10 Zahlen (Integer) gefüllt ist. Die Zahlenin dem Array
sind alle kleiner oder gleich 100. Die Zahlen sind nicht sortiert.

Die gefundene maximale Zahl soll auf dem Bildschirm ausgegeben werden.

Damit sie die Array-Belegung und das jeweilige Ergebnis prüfen können,
geben Sie das Array, wie folgt aus:
| 12 | 18 | 4 | 2 | 9 | 23 | 100 | 88 | 77 |

*/
int array(void)
{
//    int MeinArray[10]={0,0,0,0,0,0,0,0,0,0};
    int MeinArray[10]={12, 18, 4, 2, 9, 23, 100, 88, 77};
//    int MeinArray[10]={12, 18, 4, 2, 9, 23, 30, 88, 100};
//    int MeinArray[10]={98, 18, 4, 2, 9, 23, 45, 88, 77};
    int i;
    for (i=0;i<10;i++)
    {
        if (MeinArray[i]>0)
        {
            printf("| %d ",MeinArray[i]);
        }
    }
    printf("|");

    int j;
    int max=MeinArray[0];
    for (j=0;j<10;j++)
    {
        if (max<=MeinArray[j])
        {
            max=MeinArray[j];
        }
        if (max==100)
        {
            break;
        }
    }
    printf("\n Max: %d \n",max);
    return max;
}

/*

Der Algorithmus maxArray() soll die höchste Zahl im Array bestimmen.
Wenn der Algorithmus die 100 findet, bricht er die Suche ab.
Hier gibts dazu noch eine Rückgabe aber keine Ausgabe.
*/
int maxArray()
{
    //    int MeinArray[10]={0,0,0,0,0,0,0,0,0,0};
    int MeinArray[10]={12, 18, 4, 2, 9, 23, 100, 88, 77};
//    int MeinArray[10]={12, 18, 4, 2, 9, 23, 30, 88, 100};
//    int MeinArray[10]={98, 18, 4, 2, 9, 23, 45, 88, 77};
    int j;
    int max=MeinArray[0];
    for (j=0;j<10;j++)
    {
        if (max<=MeinArray[j])
        {
            max=MeinArray[j];
        }
        if (max==100)
        {
            break;
        }
    }
    return max;
}
