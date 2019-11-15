#include <QCoreApplication>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ping1 (char ip1[50]);
int ping2 (char ip2[50]);
int ping3 (char ip3[50]);
int ping4 (char ip4[50]);

int main (void)
{
    int result1=0;
    int result2=0;
    int result3=0;
    int result4=0;
    char ip1[50];
    char ip2[50];
    char ip3[50];
    char ip4[50];
    while (result1==0 || result2==0 || result3==0 || result4==0 ) {
        strcpy (ip1,"10.16.2.231");
        result1 = ping1 (ip1);
        printf ("A)0 pour offline, 1 pour online : %d\n",result1);


        strcpy (ip2,"10.16.12.127");
        result2 = ping2 (ip2);
        printf ("B)0 pour offline, 1 pour online : %d\n",result2);


        strcpy (ip3,"10.16.2.144");
        result3 = ping3 (ip3);
        printf ("C)0 pour offline, 1 pour online : %d\n",result3);


        strcpy (ip4,"10.16.2.126");
        result4 = ping4 (ip4);
        printf ("D)0 pour offline, 1 pour online : %d\n",result4);

    }

    getchar();
}



int ping1 (char ip1[50])
{
    int result1 = 0;
    char commande[100];
    strcpy (commande,"ping ");
    strcat (commande,ip1);
    strcat (commande, " -n 1 > temp");
    system(commande);
    FILE * temp;
    temp = fopen ("temp","r");
    char test[50];
    while (!feof (temp))
    {
        fscanf (temp,"%s",test);
        if (strcmp (test,"TTL=128") == 0)
        {
            result1 = 1;
        }
    }


    fclose(temp);
    return result1;
}

int ping2 (char ip2[50])
{
    int result2 = 0;
    char commande[100];
    strcpy (commande,"ping ");
    strcat (commande,ip2);
    strcat (commande, " -n 1 > temp");
    system(commande);
    FILE * temp;
    temp = fopen ("temp","r");
    char test[50];
    while (!feof (temp))
    {
        fscanf (temp,"%s",test);
        if (strcmp (test,"TTL=128") == 0)
        {
            result2 = 1;
        }
    }


    fclose(temp);
    return result2;
}

int ping3 (char ip3[50])
{
    int result3 = 0;
    char commande[100];
    strcpy (commande,"ping ");
    strcat (commande,ip3);
    strcat (commande, " -n 1 > temp");
    system(commande);
    FILE * temp;
    temp = fopen ("temp","r");
    char test[50];
    while (!feof (temp))
    {
        fscanf (temp,"%s",test);
        if (strcmp (test,"TTL=128") == 0)
        {
            result3 = 1;
        }
    }


    fclose(temp);
    return result3;
}

int ping4 (char ip4[50])
{
    int result4 = 0;
    char commande[100];
    strcpy (commande,"ping ");
    strcat (commande,ip4);
    strcat (commande, " -n 1 > temp");
    system(commande);
    FILE * temp;
    temp = fopen ("temp","r");
    char test[50];
    while (!feof (temp))
    {
        fscanf (temp,"%s",test);
        if (strcmp (test,"TTL=128") == 0)
        {
            result4 = 1;
        }
    }


    fclose(temp);
    return result4;
}
