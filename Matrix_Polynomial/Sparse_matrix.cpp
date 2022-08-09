//
// Created by Karun on 8/8/22.
//Sparse matrix are matrices having more zero elements than non-zero elements
#include <iostream>
using std::cout;
using std::cin;

struct Element {
    int r;
    int c;
    int x;
};

struct Sparse {
    int m;
    int n;
    int num;
    struct Element *e;
};

void set(struct Sparse *s) {
    std::cout<<"Enter Dimensions: ";
    std::cin>> s->m;
    std::cin>> s->n;
    std::cout<<"Enter Number Of Non Zero Elements: ";
    std::cin>>s->num;
    s->e = new Element[s->num];
    for(int i = 0; i < s->num; i++){
        std::cin>>s->e[i].r;
        std::cin>>s->e[i].c;
        std::cin>>s->e[i].x;
    }
}
//Let's create a function to add matrices

Sparse add(Sparse *s1, Sparse *s2){
    if(s1->n != s2->n && s1->m != s2->m);
     Sparse *sum;
     sum = new Sparse;
     sum->m = s1->m;
     sum->n = s1->n;
     sum->e = new Element[s1->num+s2->num];
     int i,j,k = 0;
     while (i < s1->num && j < s2->num ) {

         if(s1->e[i].r < s2->e[j].r)
             sum->e[k++] = s1->e[i++];
         else if (s1->e[i].r > s2->e[j].r)
             sum->e[k++] = s2->e[i++];

         else {
             if (s1->e[i].c < s2->e[j].c)
                 sum->e[k++] = s1->e[i++];
             else if (s1->e[i].c > s2->e[j].c)
                 sum->e[k++] = s2->e[j++];
             else {
                 sum->e[k].r = s1->e[i].r;
                 sum->e[k].c = s1->e[i].c;
                 sum->e[k++].x = s1->e[i++].x + s2->e[j++].x;
             }
         }
     }

     //For adding elements left
     for(;i < s1->num; i++)
         sum->e[k++] = s1->e[i];

     for(;j < s2->num; j++)
        sum->e[k++] = s2->e[j];

     sum->num = k;
}


int main() {
    struct Sparse e;
    Sparse *pt = &e;
    set(pt);
    std::cout<<e.e[0].x; //Printing An Element To Check Out
}