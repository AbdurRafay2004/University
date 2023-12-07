            #include <stdio.h>
            int main()
            {
            int array1[] = {1, 4, 3, 2, 6};
            int array2[] = {5, 6, 9, 8, 7};

            int array1_e =  sizeof (array1)/ sizeof(array1[0]);
            int array2_e = sizeof (array2)/ sizeof (array2[0]);

            int i, j, c=0;

            for(i=0; i<array1_e; i++)
            {
            for(j=0; j<array2_e; j++)
            {
            if(array1[i]== array2[j])
                {
                    c = 1;
                    break;
                }
            }
            if(c==1)
            break;
            }
            if(c==1)
            printf("True");
            else if(c==0)
            printf("False");

            }