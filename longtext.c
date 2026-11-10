#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
    {
        char text[]= "My day begins early, and my dog waits by the door. I pack my bag, grab my coat, and walk with my friend Mia to the bus stop. She laughs at my jokes, but MY teacher does not! Oh my! Yesterday my class read a mystery about an army of ants, and I told everyone about my family. Is my story true? Ask my grandmother, my uncle, or my neighbor. I made this lunch myself, and my sandwich is the best one in school. My secret? Smile, keep my promise, and share my snacks. Oh my, tomorrow my brother comes too!";
        int length = strlen(text);
        int count=0;
        char *word = strtok(text," ,.?!;");
        while (word!= NULL)
        {
            for (int i=0; word[i]!='\0';i++)
            {
               word[i]=  tolower(word[i]);
            }
            if (strcmp(word, "my")==0)
            {
                count++;
            }
            word = strtok(NULL," ,./?!");
        }
        printf("Length: %d\n",length);
        printf("Count: %d\n", count);
        return 0;
    }