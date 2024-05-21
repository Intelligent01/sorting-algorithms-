#include<stdio.h>
void bubble_sort(int array[],int size){
    for (int step = 0; step < size; step++)
    {
        for (int i = 0; i < size-step; i++)
        {
            if (array[i]>array[i+1])
            {
                int temp =array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
            
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