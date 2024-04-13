#include <stdio.h>
#include <time.h>
// declaracion estructura
struct{
    int velocidad;//entre 1 y 3 GHz
    int anio;//entre 2015 y 2023
    int cantidad;//entre 1 y 8
    char *tipo_cpu; //valores del arreglo tipos
    }typedef compu;
// declaracion arreglo
char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
// funciones
void cargarDatos(compu compus[5],char tipos[6][10]);
void mostrarDatos(compu compus[5]);
void mayorVelocidad(compu compus[5]);

int main()
{
    srand(time(NULL));
    compu compus[5];
    cargarDatos(compus,tipos);
    mostrarDatos(compus);
    mayorVelocidad(compus);
    return 0;
}



void cargarDatos(compu compus[5],char tipos[6][10])
{
    for (int i = 0; i < 5; i++)
        {
            compus[i].anio = rand() % 9 + 2015;
            compus[i].cantidad = rand() % 9 + 1;
            compus[i].tipo_cpu= tipos[rand() % 6];
            compus[i].velocidad = rand() % 3 + 1;
        }
}


void mostrarDatos(compu compus[5])
{
    for (int i = 0; i < 5; i++)
        {
            printf("*********computadora numero%d******\n",i+1);
            printf("%s\n",compus[i].tipo_cpu);
            printf("año:%d\n",compus[i].anio);
            printf("velocidad:%dGHZ\n",compus[i].velocidad);
            printf("cantidad de nucleos:%d\n",compus[i].cantidad);
        }
}

void mayorVelocidad(compu compus[5])
{
    int maxVel = 0;
    int j;
    for (int i = 0; i < 5; i++)
    {
        if (compus[i].velocidad > maxVel)
        {
            maxVel = compus[i].velocidad;
            j = i;
        }
    }
printf("la compu con mayor velocidad es la numero %d\n" ,j+1);
printf("su velocidad es de %d GHZ\n", compus[j].velocidad);
printf("el año de su fabricacion es %d\n", compus[j].anio);

}