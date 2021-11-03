/*created by v-star☺
 thank's to muthamma mam
 input only in small letter*/
#include <stdio.h>
#include<string.h>
struct {
    char qs[100],ans[100];
    }q[100];
    struct
    {
        char user[100];
    }query;
int main() {
int v,j,f;
//qs
strcpy(q[0].qs,"how are you");
strcpy(q[1].qs,"hello");
strcpy(q[2].qs,"what is your name");
strcpy(q[3].qs,"who made you");
strcpy(q[4].qs,"hmm");
strcpy(q[5].qs,"good morning");
strcpy(q[6].qs,"good evening");
strcpy(q[7].qs,"good afternoon");
strcpy(q[8].qs,"hi");
strcpy(q[9].qs,"i am fine");
strcpy(q[10].qs,"do you know english");
//answer
strcpy(q [0].ans," i am fine");
strcpy(q [1].ans,"hiii");
strcpy(q [2].ans,"MM_0.01");
strcpy(q [3].ans,"v-star");
strcpy(q [4].ans,"ok");
strcpy(q [5].ans,"good morning have a nice day");
strcpy(q [6].ans,"good evening have a nice day");
strcpy(q [7].ans,"good afternoon have a nice day");
strcpy(q [8].ans,"hello,how are  you");
strcpy(q [9].ans,"good to hear that");
strcpy(q [10].ans,"yes");
gets(query.user);


for(int i=0;i<11;i++)
{
    v=strcmp(q[i].qs,query.user); f=0;
    if(v==0)
    {
    j=i;
    f=1;
    break ;

    }  
}
if(f==1)
{

    printf("%s",q[j].ans);
} 
else
{ printf ("soory ,i can understand only thies words\n");
    for(int i=0;i<11;i++)
    {
       printf("%s\n",q[i].qs);
       printf("\n");
    }
}


    return 0;
}
