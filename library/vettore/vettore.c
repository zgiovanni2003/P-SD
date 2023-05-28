#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

void printf_error_array(){
    fprintf(stderr,"Nessun elemento all'interno dell'array\n");
}

void inputArray(int a[], int n){
    for (int i = 0; i < n; i++)
        scanf("%d",&a[i]);
    
}

int *input_array_dyn(int *size, char *line){

    *size=contaspazi(line);
    int n;
    int *a=(int *) malloc((*size) * sizeof(int));
    for (int i = 0; sscanf(line,"%d%n",&a[i],&n); i++)
        line+=n;

    return a;
}

int *insert_array_dyn(int *a,int *size, int element){

    int n;
    a=(int *) realloc(a,((*size+1)*sizeof(int)));
    a[*size]=element;
    (*size)++;
    
    return a;

}



void outputArray(int a[], int n){
    for (int i = 0; i < n; i++)
        printf("%d ",a[i]);
    printf("\n");
        
}

void insert_element(int a[], int *n, int val){
    a[*n]=val;
    ++(*n);
}

void bubble_sort(int a[], int n){
    for (int i = 1; i < n; i++)
        for (int j = 0; j < n-i; j++)
            if(a[j]>a[j+1])
                swap(&a[j],&a[j+1]);     
    
}

int find_element(int a[], int n, int element){
    for ( int i = 0; i < n; i++)
        if (a[i]==element) return i;
        
    return -1;
}

void find_min(int a[], int n, int *min){
    for (int i = 0; i < n; i++)
        if(a[i]<*min)
            *min=a[i];
    
}

void delete_index_element(int a[],int *n,int index){
    for (int i = index+1; i < *n; i++)
        a[i-1]=a[i];
    (*n)--;
}

int sum_array(int a[], int n){
    int sum=0;
    for (int i = 0; i < n; i++)
        sum+=a[i];

    return sum;
}

int inputArray_str(int a[], char *line){
    int n=0;
    for (int i = 0; sscanf(line,"%d%n",&a[i],&n); i++)
    {
        printf("Elemento letto %d\n Caratteri letti %d\n",a[i],n);
        line+=n;
    }
    
}