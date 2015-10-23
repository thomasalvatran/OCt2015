//home/tovantran/Ctest/sortfunctioncallback.cpp --> 2015-09-26 by ./.tv  owner: tovantran
//qsort.c Thinking in C++ media and template qsort
//http://cboard.cprogramming.com/cplusplus-programming/88675-qsort-function-plus-template.html
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <cstring>
using namespace std;


template <class T>
T compare_int(const void *p1, const void *p2)
{  //function callback
    T l = *(T *)p1;  //actual element =  one level of indirect - content of p1 pointer to
    T r = *(T *)p2;
    return (l - r);
}

template <class T>
T compare_string(const void *p1, const void *p2)
{
    char *l = *(char **)p1;  //actual element =  one level of indirect - content of p1 pointer to
    char *r = *(char **)p2;
    return strcmp(l, r);
}

int comp(const void *p1, const void *p2){
    char *a = *(char **)p1;
    char *b = *(char **)p2;
    return strcmp(a, b);
}

template<class T> //function pointer
void sortArray(T Array, int num_element, int (*funcp)(const void *, const void *))
{
    qsort(Array, num_element, sizeof Array[0], funcp);  //function callback
}
//Usage:    sortArray(array, nstr, compare_string);

template<class T>
void printArray(T array, int n, int type)
{
    int i;
    for (i = 0; i < n; ++i){
        if (type == sizeof(int))
          printf("%d\n", array[i]);
        if (type == sizeof(char))
          //  puts(array[i]);
           printf("%s\n", array[i]);
     }
}

#define nstr(array)  (sizeof array/ sizeof array[0])
#define qsort(array, type) (qsort(array, nstr(array), sizeof array[0], type))
#define element(array) (sizeof(array[0]))

int main(){
    char const *array[] = {"how", "now", "brow", "cow", "lion"};
    int array1[] = {2, 8, 1, 5, 2, 3, 12};
    qsort(array, compare_string);
//    qsort(array,nstr(array), sizeof array[0], compare_string);
    printArray(array, nstr(array), sizeof(*array[0]));

    qsort(array1, compare_int);
    printArray(array1, nstr(array1), element(array1));

    return 0;
    //pass to qsort array of pointer, qsort pass to comp pointer to pointer to character
}            //pointer array of elements = qsort passes pointer to pointer to character


