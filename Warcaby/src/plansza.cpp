#include "plansza.hh"
#include <iostream>
/*
plansza::plansza(const plansza &p)
{
  vector<pionek> pomo=p.BialeWGrze();
  pionek pom; pom.brak=true; pom.id=0; pom.damka=false;
  this->biale=p.biale;
  this->czarne=p.czarne;
  for(int i=0; i<8; i++)
    {
      for(int j=0; j<8; j++)
	{
	  pom.poz.I=i; pom.poz.J=j;
	  tablica[i][j]=pom;
	}
    }
  pom.brak=false;
  for(unsigned int i=0; i<biale.size(); i++)
    {
      pom.id=biale[i].id; pom.bialy=true;
      pom.poz.I=biale[i].poz.I; pom.poz.J=biale[i].poz.J;
      pom.damka=biale[i].damka;
      tablica[pom.poz.I][pom.poz.J]=pom;					
    }
  for(unsigned int i=0; i<czarne.size(); i++)
    {
      pom.id=czarne[i].id; pom.bialy=false;
      pom.poz.I=czarne[i].poz.I; pom.poz.J=czarne[i].poz.J;
      pom.damka=czarne[i].damka;
      tablica[pom.poz.I][pom.poz.J]=pom;					
    }
}
plansza& plansza::operator =(const plansza& p)
{
  pionek pom; pom.brak=true; pom.id=0; pom.damka=false;
  this->biale=p.biale;
  this->czarne=p.czarne;
  for(int i=0; i<8; i++)
    {
      for(int j=0; j<8; j++)
	{
	  pom.poz.I=i; pom.poz.J=j;
	  tablica[i][j]=pom;
	}
    }
  pom.brak=false;
  for(unsigned int i=0; i<biale.size(); i++)
    {
      pom.id=biale[i].id; pom.bialy=true;
      pom.poz.I=biale[i].poz.I; pom.poz.J=biale[i].poz.J;
      pom.damka=biale[i].damka;
      tablica[pom.poz.I][pom.poz.J]=pom;					
    }
  for(unsigned int i=0; i<czarne.size(); i++)
    {
      pom.id=czarne[i].id; pom.bialy=false;
      pom.poz.I=czarne[i].poz.I; pom.poz.J=czarne[i].poz.J;
      pom.damka=czarne[i].damka;
      tablica[pom.poz.I][pom.poz.J]=pom;					
    }
  return *this;
  }*/
vector<pionek> plansza::BialeWGrze()
{
	return biale;
}
vector<pionek> plansza::CzarneWGrze()
{
	return czarne;
}
bool plansza::wyjscie_poza_tablice(int x, int y)
{
  if(x<0 || x>7 || y<0 || y>7)
    return true;
  return false;
}
pionek plansza::wyszukajPionek(int x,int y)
{
  if(x>7 || y>7 || x<0 || y<0)
    throw wyjscie_poza_plansze();
  return tablica[x][y];
}
pionek plansza::wyszukajPionek(int ID, char kolor)
{
  unsigned int i=0;
  if(kolor=='B')
    {
      while(biale[i].id!=ID || i>biale.size())
	i++;
      if(i>biale.size())
	throw brak_pionka();
      return biale[i];
    }
  if(kolor=='C')
    {
      while(czarne[i].id!=ID || i>czarne.size())
	  i++;
      if(i>czarne.size())
	throw brak_pionka();
      return czarne[i];
    }
  else
    throw brak_pionka();
}
void plansza::usun(pionek p)
{
  pionek pom;
  unsigned int i;
  if(p.bialy==true)
    {
      while(biale[i]!=p || i>biale.size())
	i++;
      if(i>biale.size())
	throw brak_pionka();
      tablica[biale[i].poz.I][biale[i].poz.J]=pom;
      biale.erase(biale.begin()+i);
    }
  else
    {
      while(czarne[i]!=p || i>czarne.size())
	i++;
      if(i>czarne.size())
	throw brak_pionka();
      tablica[czarne[i].poz.I][czarne[i].poz.J]=pom;
      czarne.erase(czarne.begin()+i);
    }
}
void plansza::usun(int x, int y)
{
  int i=0;
  pionek pom; //pomocnicza zmienna przechowujaca pionek na poprzedniej pozycji
  pionek pom2; //pusty pionek do zmiany pola na puste
  if(tablica[x][y].brak==true)
    throw brak_pionka();
  pom=tablica[x][y];
  tablica[x][y]=pom2;
  if(pom.bialy==true)
    {
      while(biale[i]!=pom)
	i++;
      biale.erase(biale.begin()+i);
    }
  else
    {
      while(czarne[i]!=pom)
	i++;
      czarne.erase(czarne.begin()+i);
    }
}
void plansza::przestaw(pionek p, int x, int y)
{
  int i=0;
  pionek br;
  if(wyjscie_poza_tablice(x,y)==true)
    throw wyjscie_poza_plansze();
   if(p.brak==true)
   throw brak_pionka();
  if(tablica[x][y].brak==false)
    {
      throw pole_zajete();
    }
  if(p.bialy==true)
    {
      while(biale[i]!=p)
	i++;
      if(x==7)
	p.damka=true;
      p.poz.I=x;
      p.poz.J=y;
      tablica[biale[i].poz.I][biale[i].poz.J]=br;
      biale[i]=p;
      tablica[x][y]=p;
    }
  else
    {
      while(czarne[i]!=p)
	i++;
      if(x==0)
	p.damka=true;
      p.poz.I=x;
      p.poz.J=y;
      tablica[czarne[i].poz.I][czarne[i].poz.J]=br;
      czarne[i]=p;
      tablica[x][y]=p;
    }
      
}
void plansza::przestaw(int x, int y, int nx, int ny)
{
  przestaw(wyszukajPionek(x,y), nx, ny);
}
plansza::plansza()
{
  pionek p;
  int pom=1;
  p.brak=true; p.id=0; 
  //tablica= new pionek*[rozmiar];
  for(int i=0; i<rozmiar; i++)
    {
      //tablica[i]=new pionek[rozmiar];
      for(int j=0; j<rozmiar; j++)
	{
	  p.poz.I=i; p.poz.J=j;
	  tablica[i][j]=p;
	}
    }
  //##############################################################//
  //######################### biale #############################//
  //############################################################//
  p.brak=false; p.id=1; p.bialy=true; p.damka=false;
  for(int i=0; i<rozmiar;i=i+2)
    {
      p.id=pom;
      p.poz.I=0; p.poz.J=i;
      tablica[0][i]=p;
      biale.push_back(p);
      pom++;
    }
  for(int i=1; i<rozmiar;i=i+2)
    {
      p.id=pom;
      p.poz.I=1; p.poz.J=i;
      tablica[1][i]=p;
      biale.push_back(p);
      pom++;
    }
  for(int i=0; i<rozmiar;i=i+2)
    {
      p.id=pom;
      p.poz.I=2; p.poz.J=i;
      tablica[2][i]=p;
      biale.push_back(p);
      pom++;
    }
  //##############################################################//
  //######################### czarne ############################//
  //############################################################//
  pom=1;
  p.brak=false; p.id=1; p.bialy=false; p.damka=false;
    for(int i=1; i<rozmiar;i=i+2)
    {
      p.id=pom;
      p.poz.I=rozmiar-1; p.poz.J=i;
      tablica[rozmiar-1][i]=p;
      czarne.push_back(p);
      pom++;
    }
  for(int i=0; i<rozmiar;i=i+2)
    {
      p.id=pom;
      p.poz.I=rozmiar-2; p.poz.J=i;
      tablica[rozmiar-2][i]=p;
      czarne.push_back(p);
      pom++;
    }
  for(int i=1; i<rozmiar;i=i+2)
    {
      p.id=pom;
      p.poz.I=rozmiar-3; p.poz.J=i;
      tablica[rozmiar-3][i]=p;
      czarne.push_back(p);
      pom++;
    }
}
plansza::~plansza()
{
  biale.clear();
  czarne.clear();
  //for(int i=0; i<rozmiar; i++)
  //  delete [] tablica[i];
  //delete [] tablica;
}
bool pozycja::operator ==(const pozycja &p)
{
  if(p.I==this->I)
    if(p.J==this->J)
      return true;
  return false;
}
bool pozycja::operator !=(const pozycja &p)
{
  if(p.I==this->I)
    if(p.J==this->J)
      return false;
  return true;
}
bool pionek::operator ==(pionek &p)
{
  if(p.id==this->id)
    if(p.brak==this->brak)
      if(p.bialy==this->bialy)
	if(p.poz==this->poz)
	  return true;
  return false;
}
bool pionek::operator !=(pionek &p)
{
  if(p.id==this->id)
    if(p.brak==this->brak)
      if(p.bialy==this->bialy)
	if(p.poz==this->poz)
	  return false;
  return true;
}
void plansza::wyswietl()
{
  int wyswietl = 8;
  cout << "\033[1;33m 1  2  3  4  5  6  7  8\033[0m" << endl;
  for (int i = rozmiar-1; i >=0; i--)
    {
      for (int j = 0; j < 9; ++j)
	{
	  if(j == 8)
	    {
	      cout << "\033[1;33m " << wyswietl << "\033[0m" << endl;
	      --wyswietl;
	    }
	  else
	    if (tablica[i][j].brak == true)
	      {
		if((i+j)%2==0)
		  cout<< "\033[1;31m " <<" "<< " \033[0m";
		else
		  cout<< "\033[1;42m  " << "" << " \033[0m";
	      }
	    else{
	    if (tablica[i][j].bialy == false && tablica[i][j].brak == false)
	      {
		if(tablica[i][j].damka==false)
		  //cout<< "\033[1;37m " << tablica[i][j].id << " \033[0m";
		  cout<< "\033[1;31m " << "x" << " \033[0m";
		else cout<< "\033[1;31m " << "X" << " \033[0m";
	      }
	    else if(tablica[i][j].bialy == true && tablica[i][j].brak == false)
	      {
		if(tablica[i][j].damka==false)
		  //cout<< "\033[1;31m " << tablica[i][j].id << " \033[0m";
		  cout<< "\033[1;37m " << "o" << " \033[0m";
		else cout<< "\033[1;37m " << "Q" << " \033[0m";
	      }
	    }
	}
    }
}
void plansza::wyswietl(pionek pio)
{
  int wyswietl = 8;
  cout << "\033[1;33m 1  2  3  4  5  6  7  8\033[0m" << endl;
  for (int i = rozmiar-1; i >=0; i--)
    {
      for (int j = 0; j < 9; ++j)
	{
	  if(j == 8)
	    {
	      cout << "\033[1;33m " << wyswietl << "\033[0m" << endl;
	      --wyswietl;
	    }
	  else
	    if (tablica[i][j].brak == true)
	      {
		if((i+j)%2==0)
		  cout<< "\033[1;22m " <<" "<< " \033[0m";
		else
		  cout<< "\033[1;42m " << " " << " \033[0m";
	      }
	    else
	      {
		if(tablica[i][j]==pio)
		  {
		    if(pio.bialy==true)
		      cout<< "\033[47;0;34m o \033[0m";
		    else
		      cout<< "\033[47m\033[0;34m x \033[0m";
		  }
		else{
		  if (tablica[i][j].bialy == false
		      && tablica[i][j].brak == false)
		    {
		      if(tablica[i][j].damka==false)
			cout<< "\033[1;31m " << "x" << " \033[0m";
		      else  cout<< "\033[1;31m " << "X" << " \033[0m";
		    }
		  else if(tablica[i][j].bialy == true
			  && tablica[i][j].brak == false)
		    {
		      if(tablica[i][j].damka==false)
			cout<< "\033[1;37m " << "o" << " \033[0m";
		      else cout<< "\033[1;37m " << "Q" << " \033[0m";
		    }
		}
	      }
	}
    }
}
void plansza::wyswietl(int x, int y)
{
  int wyswietl = 8;
  cout << "\033[1;33m 1  2  3  4  5  6  7  8\033[0m" << endl;
  for (int i = rozmiar-1; i >=0; i--)
    {
      for (int j = 0; j < 9; ++j)
	{
	  if(j == 8)
	    {
	      cout << "\033[1;33m " << wyswietl << "\033[0m" << endl;
	      --wyswietl;
	    }
	  else
	    if (tablica[i][j].brak == true)
	      {
		if((i+j)%2==0)
		  cout<< "\033[1;22m " <<" "<< " \033[0m";
		else
		  cout<< "\033[1;42m  " << "" << " \033[0m";
	      }
	    else
	      {
		if(i==x && j==y)
		  {
		    if(wyszukajPionek(x,y).bialy==true)
		      cout<< "\033[43m\033[0;34m " << "o" << " \033[0m";
		    else
		      cout<< "\033[43m\033[0;33m " << "x" << " \033[0m";
		  }
		else{
		  if (tablica[i][j].bialy == false
		      && tablica[i][j].brak == false){
		    if(tablica[i][j].damka==false)
		    //cout<< "\033[1;37m " << tablica[i][j].id << " \033[0m";
		    cout<< "\033[1;31m " << "x" << " \033[0m";
		    else cout<< "\033[1;31m " << "X" << " \033[0m";
		  }
		  else if(tablica[i][j].bialy == true
			  && tablica[i][j].brak == false){
		    if(tablica[i][j].damka==false)
		    //cout<< "\033[1;31m " << tablica[i][j].id << " \033[0m";
		    cout<< "\033[1;37m " << "o" << " \033[0m";
		    else cout<< "\033[1;37m " << "Q" << " \033[0m";
		  }
		}
	      }
	}
    }
}
