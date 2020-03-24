#include <stdio.h>
#include <string.h>
void main()
{
    FILE *fp;
    char ch;
    int i = 0;
    int l,j,k,count;
    char str[100];
    if((fp = fopen("E:\\linux\\hitics\\hellowin.c","r")) != NULL)
    {
        printf("the file was opened\n");
        do{
            str[i] = fgetc(fp);
            i++;
        }while(feof(fp)==0);
        k = i;
        l = i/16;
        for(i=0;i<l;i++)
        {
            count = 0;
            for(j = i*16;count<16;j++)
            {
                if(str[j]=='\n') {
                    printf("\\");
                    printf("n\t");
                    count++;
                    continue;
                }
                if(str[j]=='\t'){
                    printf("\\");
                    printf("t\t");
                    count++;
                    continue;
                }
                printf("%c\t",str[j]);
                count++;
            }
            printf("\n");
            count = 0;
            for(j = i*16;count<16;j++)
            {
                printf("%x\t",str[j]);
                count++;
            }
            printf("\n\n");
        }
        for(i=l*16;i<=k;i++)
        {
/*                if(str[j]=='\n') {
                    printf("\\");
                    printf("n\t");
                    continue;
                }*/
            printf("%c\t",str[i]);
        }
        printf("\n");
        for(i=l*16;i<=k;i++)
        {
            printf("%x\t",str[i]);
        }
        printf("\n");
        fclose(fp);
    }
    else printf("the file was not opened");


}
