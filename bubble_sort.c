#include<stdio.h>
void bubble_sort(int array[],int size){
    for (int step = 0; step < size-1; step++)
    {
        int swapped=0;

        for (int i = 0; i < size-step-1; i++)
        {
            if (array[i]>array[i+1])
            {
                int temp =array[i];
                array[i]=array[i+1];
                array[i+1]=temp;

                swapped=1;
            }
            
        }
        if (!swapped)
        {
            printf("\n not swapped \n");
            break;
        }
        
        
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
    bubble_sort(data,size);
    print_arr(data,size);

}