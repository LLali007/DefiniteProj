#ifndef STRUCT_H_INCLUDED
#define STRUCT_H_INCLUDED

struct Mon
{
    int ID;
    char opt1 [4];
    double tranac;
    char opt2 [4];
    double rez;

    struct Mon *next;
};


#endif // STRUCT_H_INCLUDED
