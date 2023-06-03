#ifndef SEARCHID_H_INCLUDED
#define SEARCHID_H_INCLUDED
void searchWithID(struct Mon *head,int num)
{
    struct Mon *current=NULL;
    current=head;
    int cnt=0;

   // checking the id in a loop of linked list where current is used as a structure pointer

    while(current!=NULL)
    {
        //checking the id for each node

        if(current->ID==num)
        {
           printf("\n%.4lf %s == %.4lf %s \n",current->tranac,current->opt1,current->rez,current->opt2);
           cnt++;
        }

        //passing to the next node

        current=current->next;
    }
    //counter variable is used to check error in search

    if(cnt==0)
    {
        printf("There is no ID matching. \n");
    }
}


#endif // SEARCHID_H_INCLUDED
