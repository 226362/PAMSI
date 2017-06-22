#include "gracz.hh"
#include <iostream>
bool gracz::RuszPionek(ruchy &r,pionek &pio , int x, int y)
{
  pozycja pom;
  pozycja wej;
  wej.I=x; wej.J=y;
  queue<int> dostepne;
  queue<pozycja> dostepned;
  if(pio.bialy==true)
    {
      if(pio.damka==true)
	{
	  dostepned=r.KrolowaRuchy(pio);
	  cout<<"ilosc dostepnych ruchow "<<dostepned.size()<<endl;
	  while(dostepned.empty()==false)
	    {
	      pom=dostepned.front();
	      cout<<"dostepne pole "<<pom.I<<" "<<pom.J<<endl;
	      if(pom==wej)
		{
		  r.RuchKrolowa(pio,wej);
		  return true;
		}
	      dostepned.pop();
	    }
	  throw niedozwolony_ruch();
	}
      else
	{
	  if(y==pio.poz.J+1 && x==pio.poz.I+1)
	    {
	      if(r.DostepPrawo(pio)==false)
		throw niedozwolony_ruch();
	      else
		{
		  if(r.CzyBicie(pio)==true)
		    {
		      throw niedozwolony_ruch();
		    }
		  r.RuchPrawo(pio);
		  return false;
		}
	    }
	  else if(y==pio.poz.J-1 && x==pio.poz.I+1)
	    {
	      if(r.DostepLewo(pio)==false)
		throw niedozwolony_ruch();
	      else
		{
		  if(r.CzyBicie(pio)==true)
		    {
		      throw niedozwolony_ruch();
		    }
		  r.RuchLewo(pio);
		  return false;
		}
	    }
	  else if(y==pio.poz.J+2 && x==pio.poz.I+2)
	    {
	      if(r.CzyBiciePG(pio)==true)
		{
		  r.BiciePrawoPrz(pio);
		  return true;
		}
	      else throw niedozwolony_ruch();
	    }
	  else if(y==pio.poz.J-2 && x==pio.poz.I+2)
	    {
	      if(r.CzyBicieLG(pio)==true)
		{
		  r.BicieLewoPrz(pio);
		  return true;
		}
	      else throw niedozwolony_ruch();
	    }
	  else
	    if(y==pio.poz.J+2 && x==pio.poz.I-2)
	      {
		if(r.CzyBiciePD(pio)==true)
		  {
		    r.BiciePrawoTyl(pio);
		    return true;
	      }
		else throw niedozwolony_ruch();
	      }
	    else if(y==pio.poz.J-2 && x==pio.poz.I-2)
	      {
		if(r.CzyBicieLD(pio)==true)
		  {
		    r.BicieLewoTyl(pio);
		return true;
		  }
		else throw niedozwolony_ruch();
	      }
	    else
	      {
		throw niedozwolony_ruch();
	      }
	}
    }
  else
    {
      if(pio.damka==true)
	{
	  dostepned=r.KrolowaRuchy(pio);
	  while(dostepned.empty()==false)
	    {
	      pom=dostepned.front();
	      if(pom==wej)
		{
		  r.RuchKrolowa(pio,wej);
		  return true;
		}
	      dostepned.pop();
	    }
	  throw niedozwolony_ruch();
	}
      else
	{
	  if(y==pio.poz.J+1 && x==pio.poz.I-1)
	    {
	      if(r.DostepPrawo(pio)==false)
		throw niedozwolony_ruch();
	      else
		{
		  if(r.CzyBicie(pio)==true)
		    {
		      throw niedozwolony_ruch();
		    }
		  r.RuchPrawo(pio);
		  return false;
		}
	    }
	  else if(y==pio.poz.J-1 && x==pio.poz.I-1)
	    {
	      if(r.DostepLewo(pio)==false)
		throw niedozwolony_ruch();
	      else
		{
		  if(r.CzyBicie(pio)==true)
		    {
		      throw niedozwolony_ruch();
		    }
		  r.RuchLewo(pio);
		  return false;
		}
	    }
	  else if(y==pio.poz.J+2 && x==pio.poz.I-2)
	    {
	      if(r.CzyBiciePD(pio)==true)
		{
		  r.BiciePrawoPrz(pio);
		  return true;
		}
	      else throw niedozwolony_ruch();
	    }
	  else if(y==pio.poz.J-2 && x==pio.poz.I-2)
	    {
	      if(r.CzyBicieLD(pio)==true)
		{
		  r.BicieLewoPrz(pio);
		  return true;
		}
	      else throw niedozwolony_ruch();
	    }
	  else
	    if(y==pio.poz.J+2 && x==pio.poz.I+2)
	      {
		if(r.CzyBiciePG(pio)==true)
		  {
		    r.BiciePrawoTyl(pio);
		    return true;
	      }
		else throw niedozwolony_ruch();
	      }
	    else if(y==pio.poz.J-2 && x==pio.poz.I+2)
	      {
		if(r.CzyBicieLG(pio)==true)
		  {
		    r.BicieLewoTyl(pio);
		return true;
		  }
		else throw niedozwolony_ruch();
	      }
	    else
	      {
		throw niedozwolony_ruch();
	      }
	}
    }
  return false;
}
pionek gracz::ZaznaczPionek(ruchy &r, int x, int y, char k='C')
{
  pionek pio;
  int pom;
  queue<int> dostepne;
  pio=r.wyszukajPionek(x,y);
  if(pio.brak==true)
    throw brak_pionka_na_podanej_pozycji();
  if(k=='C')
    if(pio.bialy==true)
      throw pionek_przeciwnika();
  if(k=='B')
    if(pio.bialy==false)
      throw pionek_przeciwnika();
  if(pio.damka==false)
    {
      if(k=='C')
	dostepne=r.DostepneCzarne();
      else
	dostepne=r.DostepneBiale();
      cout<<"Dostepne pionki do ruchu "<< dostepne.size()<<endl;
      while(dostepne.empty()==false)
	{
	  cout<<"Dostepne pionki do ruchu "<< dostepne.front()<<endl;
	  pom=dostepne.front();
	  if(pom==pio.id)
	    {
	      r.wyswietl(pio);
	      return pio;
	    }
	  dostepne.pop();
	}
    }
  else
    {
      if(k=='C')
	dostepne=r.KrolowaCzarnaDostep();
      else
	dostepne=r.KrolowaBialaDostep();
      while(dostepne.empty()==false)
	{
	  pom=dostepne.front();
	  if(pom==pio.id)
	    {
	      r.wyswietl(pio);
	      return pio;
	    }
	  dostepne.pop();
	}
    }
  throw brak_ruchu();
  return pio;
}
