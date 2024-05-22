#include<stdio.h>

void swp(int *a ,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
void selection_sort(int array[],int size){

    for (int i = 0; i < size; i++)
    {
        int min=i;
        for (int j = i+1; j < size; j++)
        {
            if(array[j]<array[min])
                min=j;
        }
        swp(&array[i],&array[min]);
    }
    
}

void print_arr(int array[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",array[i]);
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
    selection_sort(data,size);
    print_arr(data,size);print_arr(data,size);
}