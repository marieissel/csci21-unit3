/*
 * Name        : lab_12.cpp
 * Author      : Marie Issel
 * Description : Working with Pointers and Dynamic Variables / Arrays
 */
#include "lab_12.h"

unsigned int i;


int* MakeDynoIntArray(unsigned int size)
{
    int* array = new int[size];
    return array;
}

int Sum(int* the_array, unsigned int array_size)
{
    if (array_size == 0) 
    {
        throw "NULL ARRAY REFERENCE";
    }
    int arraySum=0;
    for (i=0; i<array_size; i++)
    {
        arraySum += the_array[i];
    }
    return arraySum;
}

int Max(int* the_array, unsigned int array_size)
{
    if (array_size == 0) 
    {
        throw "NULL ARRAY REFERENCE";
    }
    int arrayMax=the_array[0];
    for (i=0; i<array_size; i++)
    {
        if  (arrayMax < the_array[i])
        {
            arrayMax = the_array[i];
        }
    }
    return arrayMax;
    
}

int Min(int* the_array, unsigned int array_size)
{
    if (array_size == 0) 
    {
        throw "NULL ARRAY REFERENCE";
    }
    int arrayMin=the_array[0];
    for (i=0; i<array_size; i++)
    {
        if  (arrayMin > the_array[i])
        {
            arrayMin = the_array[i];
        }
    }
    return arrayMin;
}