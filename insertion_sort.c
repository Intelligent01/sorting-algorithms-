#include<stdio.h>

void print_arr(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d \n", array[i]);
  }
}

int insertion_sort(int array[],int size){
    for (int step = 1; step < size; step++)
    {
        int key=array[step];
        int i=step-1;

        while (key < array[i] && i>=0)
        {
            array[i+1]=array[i];
            i--;
        }
        array[i+1]=key;
    }
    
}

int main(){
    int size;
    printf("enter the size of the array : ");
    scanf("%d",&size);
    int data[size];
    for (int i = 0; i < size; i++)
    {
        printf("insert [%d] -> ",i);
        scanf("%i",&data[i]);
    }
    print_arr(data,size);
    insertion_sort(data,size);
    print_arr(data,size);
}