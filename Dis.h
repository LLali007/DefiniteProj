#ifndef DIS_H_INCLUDED
#define DIS_H_INCLUDED
void displayTrans(struct Mon *head)
{
    struct Mon *current=NULL;
    current=head;

    while(current!=NULL)
    {
        printf("%d \n%.4lf %s == %.4lf %s \n",current->ID,current->tranac,current->opt1,current->rez,current->opt2);
        current=current->next;
    }
}


#endif // DIS_H_INCLUDED
