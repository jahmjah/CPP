#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void cuadro ( int x, int y, int x1 , int y1 ,int tipo)
{
 int cont, lin_hor, lin_ver, sup_izq, sup_der, inf_izq, inf_der;
 if (tipo ==1)
   {
    lin_hor =196; lin_ver =179;
    sup_der =218; sup_izq =191;
    inf_der =192; inf_izq =217;
   }
 else
   {
    lin_hor =205; lin_ver =186;
    sup_der =201; sup_izq =187;
    inf_der =200; inf_izq =188;
   }
 for (cont=x ;cont <=x1 ;cont++)
  {
   gotoxy(cont,y ); cprintf("%c",lin_hor);
   gotoxy(cont,y1); cprintf("%c",lin_hor);
  }
 for (cont=y ;cont <=y1 ;cont++)
  {
   gotoxy(x, cont); cprintf("%c",lin_ver);
   gotoxy(x1,cont); cprintf("%c",lin_ver);
  }
 gotoxy(x ,y ); cprintf("%c",sup_der);
 gotoxy(x1,y ); cprintf("%c",sup_izq);
 gotoxy(x ,y1); cprintf("%c",inf_der);
 gotoxy(x1,y1); cprintf("%c",inf_izq);
}

main()
{
 clrscr();
 cuadro(1,1,80,24,1);
 cuadro(5,5,75,19,2);
 getch();
}
