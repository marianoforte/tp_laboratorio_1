#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Menu.h"
#include "ArrayEmployees.h"
#include "Input&Validation.h"
#include "ConsoleOutputStyle.h"
#define SIZE 3


void mainMenu(void)
{
    int option;
    sEmployee employeesListing[SIZE];//MODIFY ARRAY SIZE
    int freeRowEmployeesList;
    int lastId;
    lastId = 0;

    initArrayAsEmpty(employeesListing, SIZE);
    do
    {
        system("color F0");
        Color(WHITE,BLUE);
        printf("\n                    _____________________________________________");
        printf("\n                   |                                             |");
        printf("\n                   |*********ADMINISTRACION DE EMPLEADOS*********|");
        printf("\n                   |_____________________________________________|\n\n");
        Color(WHITE,BLACK);
        option = getInt("\nSelecciona una opcion\n\n1. ALTA\n2. MODIFICAR\n3. BAJA\n4. INFORMAR\n0. SALIR\n\nIngrese una opcion: ");
        switch(option)
        {
        case 1://ALTA
            freeRowEmployeesList = searchListingFirstEmptyPlace(employeesListing, SIZE);
            if(freeRowEmployeesList == -1 || freeRowEmployeesList == SIZE)
            {
                Color(WHITE,BLUE);
                printf("\n\n------------------------------------------------------------------------------------\n\n");
                Color(WHITE,BLACK);
                Color(WHITE,RED);
                printf("\n\nEl listado esta lleno. Elimina alg%cn empleado para ingresar uno nuevo\n\n",163);
                Color(WHITE,BLACK);
                Color(WHITE,BLUE);
                printf("\n\n------------------------------------------------------------------------------------\n\n");
                Color(WHITE,BLACK);
            }
            else
            {
                lastId = createId(employeesListing,lastId,freeRowEmployeesList);
                employeesListing[freeRowEmployeesList] = getEmployee(employeesListing[freeRowEmployeesList]);
                employeesListing[freeRowEmployeesList].isEmpty = changeIsEmptyState(employeesListing[freeRowEmployeesList]);
                employeesListing[freeRowEmployeesList].id = lastId;
                Color(WHITE,BLUE);
                printf("\n\n------------------------------------------------------------------------------------\n\n");
                Color(WHITE,BLACK);
                Color(WHITE,YELLOW );
                printf("Se le ha asignado la ID %04d.",lastId);
                Color(WHITE,BLACK);
                Color(WHITE,BLUE);
                printf("\n\n------------------------------------------------------------------------------------\n\n");
                Color(WHITE,BLACK);
            }
            system("pause");
            system("cls");
            break;
        case 2://MODIFICAR
            if(lastId == 0)
            {
                Color(WHITE,BLUE);
                printf("\n\n------------------------------------------------------------------------------------\n\n");
                Color(WHITE,BLACK);
                Color(WHITE,RED);
                printf("\nNo se han ingresado empleados hasta el momento.\n");
                Color(WHITE,BLACK);
                Color(WHITE,BLUE);
                printf("\n\n------------------------------------------------------------------------------------\n\n");
                Color(WHITE,BLACK);
            }
            else
            {
                modifyEmployee(employeesListing, SIZE);
            }
            system("pause");
            system("cls");
            break;
        case 3://BAJA
            if(lastId == 0)
            {
                Color(WHITE,BLUE);
                printf("\n\n------------------------------------------------------------------------------------\n\n");
                Color(WHITE,BLACK);
                Color(WHITE,RED);
                printf("\nNo se han ingresado empleados hasta el momento.\n");
                Color(WHITE,BLACK);
                Color(WHITE,BLUE);
                printf("\n\n------------------------------------------------------------------------------------\n\n");
                Color(WHITE,BLACK);
            }
            else
            {
                deleteEmployee(employeesListing, SIZE);
            }
            system("pause");
            system("cls");
            break;
        case 4://MOSTRAR
            if(lastId == 0)
            {
                Color(WHITE,BLUE);
                printf("\n\n------------------------------------------------------------------------------------\n\n");
                Color(WHITE,BLACK);
                Color(WHITE,RED);
                printf("\nNo se han ingresado empleados hasta el momento.\n");
                Color(WHITE,BLACK);
                Color(WHITE,BLUE);
                printf("\n\n------------------------------------------------------------------------------------\n\n");
                Color(WHITE,BLACK);
            }
            else
            {
                sortEmployees(employeesListing,SIZE);
                printList(employeesListing,SIZE);
            }
            system("pause");
            system("cls");
        case 0: //SALIR
            break;
        default:
            Color(WHITE,RED);
            printf("Opci%cn inv%clida. Elija nuevamente.\n\n",162,160);
            Color(WHITE,BLACK);
            system("pause");
            system("cls");
            break;
        }
    }while(option!=0);
    printf("\n\n");
    Color(WHITE,BLUE);
    printf("------------------------------------------------------------------------------------\n");
    Color(WHITE,BLACK);
    Color(WHITE,GREEN);
    printf("\nGracias por utilizar la aplicaci%cn.\n\nDise%co y desarrollo por Mariano Forte.\n\nVersion 4.0\n",162,164);
    Color(WHITE,BLACK);
    Color(WHITE,BLUE);
    printf("\n------------------------------------------------------------------------------------\n");
    Color(WHITE,BLACK);
}