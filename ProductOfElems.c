#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[]) 
{
    int nElems;
    short* iArray;
    long nProduct;
    system("cls");
    printf("Input a count of elements in array\r\n");
    scanf_s("%d", &nElems);
    iArray = calloc(nElems, sizeof(short));
    if (iArray == NULL) return -1;
    nProduct = 1;
    srand(time(NULL));
    for (int i = 0; i < nElems; i++)
    {
        iArray[i] = 1 + rand() % 10;
    }
    printf("Inputed array : ");
    for (int i = 0; i < nElems; i++)
    {
        nProduct *= iArray[i];
        printf("%d ", iArray[i]);
    }
    free(iArray);
    printf("\r\nThe Product of %d elements of the array is : %ld\r\n", nElems, nProduct);
    _fgetchar();
    fgetc(stdin);
	return 0;
}
