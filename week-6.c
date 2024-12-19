#include <stdio.h>
#include <math.h>


int main()
{
    int myArray[10] = {1,2,3,4,5};

    myArray[5] = 5;
    for(int i = 0; i < 10; i++)
    {
        printf("%d\n",myArray[i]);
    }

    int multiArray[3][4];
    for(int i = 0; i < 3; i++)
    {
        printf("%d\n", multiArray[i][0]);
    }

    return 0;
}


/*
int main(){

    int matrix[3][3] = {
                    {1,2,3},
                    {4,5,6},
                    {7,8,9},
    };

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(j != 2)
            {
                printf("%d, ", matrix[i][j]);
            }
            else
            {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
*/

/*
void append(int array[], int size, int element);
int main(){

    void append(int array[], int size, int element){
        for(int i = 0;i<size;i++){
            if(array[i]==0){
                array[i] = element;
            }
        }
    }
}
*/


