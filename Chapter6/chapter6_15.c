#include <stdio.h>
#include <string.h>

void main(void)
{

    char arr[255] = "0";//��ʼ�����飬����vs�����»�������
    int i = 0;
    printf("Enter a string of word: ");

    while(scanf("%c", &arr[i]) && arr[i] != '\n')
    {
        i++;
    }

    int len = strlen(arr);

    for(int j = len - 2; j >= 0; j--)
    {
        printf("%c", arr[j]);
    }
}
