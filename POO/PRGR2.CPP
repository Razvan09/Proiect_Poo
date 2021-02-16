#include<string.h>
#include<assert.h>
#include<iostream.h>

class rest
{private:char*nume;
	 int nr_cl,nr_ang,nr_loc;
public:rest();
       rest(char*,int,int,int);
       ~rest();
       void set_nume(char*);
       char*get_nume();
       void set_nr_cl(int);
       int get_nr_cl();
       void set_nr_ang(int);
       int get_nr_ang();
       void afisare();
};
rest::rest()
{nr_cl=0;nr_ang=0;nr_loc=0;}
rest::rest(char*N,int C, int A, int L)
{nume=new char[strlen(N)+1];
assert(nume!=0);
strcpy(nume,N);
nr_cl=C;
nr_ang=A;
nr_loc=L;
}
rest::~rest()
{delete nume;
}
void rest::set_nume(char*num)
{strcpy(nume,num);
}
char*rest::get_nume()
{return nume;
}
void rest::set_nr_cl(int cl)
{nr_cl=cl;
}
void rest::get_nr_cl()
{return nr_cl;
}
void rest::set_nr_ang(int ang)
{nr_ang=ang;
}
void rest::get_nr_ang()
{return nr_ang;
}
void rest::afisare()
{cout<<"\nNume:"<<nume;
cout<<"\Numar clienti:">>nr_cl;
cout<<"\nNumar angajati:">>nr_ang;
cout<<"\nNumar locuri:">>nr_loc;
}


class rest_ro:public rest
{private:char*nume;
	   int nr_cl,nr_ang,nr_loc;
public: rest_ro();
	rest_ro(char*,int,int,int,char*,int,int,int);
       ~rest_ro();
       void afisare();
};
res_ro::rest_ro()
{nr_cl=0;nr_ang=0;nr_loc=0;}
rest_ro::rest_ro(char*N,int C,int A,int L,char*NUM,int CL,int ANG,int LOC):rest(N,C,A,L)
{nume=new char[strlen(NUM)+1];
assert(nume!=0);
strcpy(nume,NUM);
nr_cl=CL;
nr_ang=ANG;
nr_loc=LOC;
}
rest_ro::~rest_ro()
{delete nume;
}
void rest_ro::afisare()
{rest::afisare();
cout<<"\nNume:"<<nume;
cout<<"\nNr de cl:"<<nr_cl;
cout<<"\nNr de ang:"<<nr_ang;
cout<<"\nNr de loc:"<<nr_loc;
}


class rest_jap:public rest
{protected:char*nume;
public:rest_jap();
       rest_jap(char*,int,int,int,char*);
       ~rest_jap();
       void afisare();
};
rest_jap::rest_jap()
{}
rest_jap::rest_jap(char*N,int C,int A,int L,char*Nume):rest(N,C,A,L)
{nume=new char[strlen(Nume)+1];
assert(nume!=0);
strcpy(nume,Nume);
}
rest_jap::~rest_jap()
{delete nume;
}
void rest_jap::afisare()
{rest::afisare();
cout<<"\nNume:"<<nume;
}

r
class rest_it:public rest
{public:rest_it();
	rest_it(char*,int,int,int);;
	void afisare();
};
rest_it::rest_it()
{
}
rest_it::rest_it(char*N,int C,int A,int L):rest(N,C,A,L)
void rest_it::afisare()
{cout<<"\nRest it:";
}


class rest_it_spg:public rest_it
{private:char* nume;
	 int nr_cl,nr_ang,nr_loc;
public:rest_it_spg();
       rest_it_spg(char*,int,int,int);
       void afisare();
};
rest_it_spg::rest_it_spg()
{
nr_cl=0;
nr_ang=0;
nr_loc=0;
}
rest_it_spg::rest_it_spg(char*N,int C,int A,int L,char* Num,int Cl,int Ang,int Loc):rest_it(N,C,A,L)
{nume=new char[strlen(Num)+1];
nr_cl=Cl;
nr_ang=Ang;
nr_loc=Loc;
}
void rest_it_spg::afisare()
{cout<<"\nRest it cu spg:";
}


class rest_it_pz:public rest_it
{protected:char*nume;
	   int nr_cl,nr_ang,nr_loc;
public:rest_it_pz();
       rest_it_pz(char*,int,int,int);
       rest_it_pz(rest_it_pz&);
       void afisare();
};
rest_it_pz::rest_it_pz()
{
nr_cl=0;
nr_ang=0;
nr_loc=0;
}
rest_it_pz::rest_it_pz(char numele,int clienti,int angajati,int locuri)
{nume=numele;
nr_cl=clienti;
nr_ang=angajati;
nr_loc=locuri;
}
rest_it_pz::rest_it_pz(rest_it_pz&Y)
{nume=Y.nume;
nr_cl=Y.nr_cl;
nr_ang=Y.nr_ang;
nr_loc=Y.nr_loc;
}
void rest_it_pz::afisare()
{cout<<"\nRest it cu pizza:";
}


void main()
{rest ob1("All in one","3000","300","5000");
ob1.afisare();
rest_ro ob2("All in one","3000","300","5000","Cetate","80","20","100");
ob2.afisare();
rest_jap ob3("All in one","3000","300","5000","Kanto Sushi","150","30","200");
ob3.afisare();
rest_it*ptr;
rest_it_spg ob4(3);
ptr=&ob4;
ob4.afisare();
rest_it_pz ob5(7,9);
ptr=&ob5;
ob5.afisare();

}









