#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d",&T);
    while (T--)
    {
        int k;
        scanf("%d",&k);
        char o[100000];
        int i=0;
        scanf("%c",&o[i]);
        //accepting oringinal
        long int original[256]={};
        while(1)
        {
            scanf("%c",&o[i]);
            if((o[i]==32) || ((o[i]>=97) && (o[i]<=122)) )
            {
                original[o[i]]++;
                i++;
            }
            else
            {
                o[i]='\0';
                break;
            }
        }
        // printf("%s\n",o);
        long int ml=i;
        //accepting encoded
        char e[100000];
        i=0;
        long int encoded[256]={};
        while(1)
        {
            scanf("%c",&e[i]);
            if((e[i]==32) || ((e[i]>=97) && (e[i]<=122)) )
            {   
                encoded[e[i]]++;
                i++;
            }
            else
            {
                e[i]='\0';
                break;
            }
        }
        long int el=i;
        // printf("%s\n",e);
        //creating encoded
        long int temp_encoded[256]={};
        for(int i=0;i<ml;i++)
        {
            int encoded_character;
            if(o[i]!=' ')
            {
                if((o[i]+k) <=122)
                {
                    temp_encoded[o[i]+k]++;
                    // printf("%c %d\n",(o[i]+k),(o[i]+k));
                }
                else
                {
                    long int ans = o[i]+k-122-1+97;
                    // printf("%c %d\n",ans,ans);
                    temp_encoded[ans]++;
                    /*
                    ans = o[i]+k = 124
                    ans-122-1+97;
                    */

                }
            }
            else
            {
                temp_encoded[' ']++;
            }
        }
        // printf("\t%d",temp_encoded[' ']);
        int flag =0;
        for(int i=0;i<256;i++)
        {
            if(temp_encoded[i]!=encoded[i])
                flag=1;
        }
        if(flag==0)
            printf("True\n");
        else
            printf("False\n");
    }
    return 0;
}