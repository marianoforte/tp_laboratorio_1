#ifndef ARRAYEMPLOYEES_H_INCLUDED
#define ARRAYEMPLOYEES_H_INCLUDED
#include "Input&Validation.h"


/**
 * \brief Initialize all indexes of the array as empty
 * \param employeeData It is the array in which to set the empty states
 * \param quant It is the lenght of the array itself
 * \return If the process was successfull or not
 *
 */
int initArrayAsEmpty(sEmployee employeeData[], int quant);

/**
 * \brief Traverse the array looking for the first available place to store the data
 * \param employeeData It is the array in which to search the empty state
 * \param quant It is the lenght of the array itself
 * \return The index where to put all the data
 *
 */
int searchListingFirstEmptyPlace(sEmployee employeeData[], int quant);

/**
 * \brief Changes the empty state of the index so the data won't be over-written
 * \param employeeData It is the array where the state is modified
 * \return The status change
 *
 */
int changeIsEmptyState(sEmployee employeeData);

/**
 * \brief Creates an ID for every employee input
 * \param employeeData It is the array where the place the ID
 * \param quant It is the lenght of the array itself
 * \return The new Id created
 *
 */
int createId(sEmployee employeeData[],int lastId, int quant);

/**
 * \brief Modifies an employee by using the ID received
 * \param employeeData It is the array where to modify the employee
 * \param quant It is the lenght of the array itself
 * \return The success or not of the modification
 *
 */
int modifyEmployee(sEmployee employeeData[], int quant);

/**
 * \brief Deletes an employee by using the ID received
 * \param employeeData It is the array where to delete the employee
 * \param quant It is the lenght of the array itself
 * \return The success or not of the deletion
 *
 */
int deleteEmployee(sEmployee employeeData[], int quant);

/**
 * \brief Sorts the employees in ascending order by last name, and if they are the same,
            sorts them in ascending order by sector
 * \param employeeData It is the array to sort
 * \param quant It is the lenght of the array itself
 * \return The sorting confirmation
 *
 */
int sortEmployees(sEmployee employeeData[], int quant);

/**
 * \brief Calculates the average of all wages
 * \param employeeData It is the array where to gather the wages data
 * \param quant It is the lenght of the array itself
 * \return The final average of all wages
 *
 */
float averageWage(sEmployee employeeData[], int quant);

/**
 * \brief Prints a list with all the employees in the system and the wages average
 * \param employeeData It is the array where to gather all employee data
 * \param quant It is the lenght of the array itself
 * \return The confirmation value of printings success
 *
 */
int printList(sEmployee employeeData[],int quant);

#endif // ARRAYEMPLOYEES_H_INCLUDED
