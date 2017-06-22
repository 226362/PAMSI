#include "ruchy.hh"
#include<iostream>
queue<pozycja> ruchy::KrolowaRuchy(int ID, char kolor)
{
  pionek pom;
  pom=szachownica.wyszukajPionek(ID,kolor);
  return KrolowaRuchy(pom);
}
queue<pozycja> ruchy::KrolowaRuchy(pionek pio)
{
  queue<pozycja> wyjscie;
  pozycja pom;
  
  if(pio.bialy==true)
    {
      if(CzyBicie('B')==true)
	{
	  if(CzyBicie(pio)==true)
	    {
	      {
		if(szachownica.wyjscie_poza_tablice(pio.poz.I+1,pio.poz.J+1)==false)
		  for(int i=0; szachownica.wyjscie_poza_tablice(pio.poz.I+2+i,pio.poz.J+2+i)==false; i++)
		    if(szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J+1+i).bialy==false&&
		       szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J+1+i).brak==false)
		      if(szachownica.wyszukajPionek(pio.poz.I+2+i, pio.poz.J+2+i).brak==true)
			{
			  while(szachownica.wyjscie_poza_tablice(pio.poz.I+2+i,pio.poz.J+2+i)==false
				&& szachownica.wyszukajPionek(pio.poz.I+2+i, pio.poz.J+2+i).brak==true)
			    {
			      pom.I=pio.poz.I+2+i; pom.J=pio.poz.J+2+i;
			      wyjscie.push(pom);
			      i++;
			    }
			   break;
			}
		//-----------------------------------------------------------//
		if(szachownica.wyjscie_poza_tablice(pio.poz.I+1,pio.poz.J-1)==false)
		  for(int i=0; szachownica.wyjscie_poza_tablice(pio.poz.I+2+i,pio.poz.J-2-i)==false; i++)
		    if(szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J-1-i).bialy==false&&
		       szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J-1-i).brak==false)
		      if(szachownica.wyszukajPionek(pio.poz.I+2+i, pio.poz.J-2-i).brak==true)
			{
			  while(szachownica.wyjscie_poza_tablice(pio.poz.I+2+i,pio.poz.J-2-i)==false
				&& szachownica.wyszukajPionek(pio.poz.I+2+i, pio.poz.J-2-i).brak==true)
			    {
			      pom.I=pio.poz.I+2+i; pom.J=pio.poz.J-2-i;
			      wyjscie.push(pom);
			      i++;
			    }
			  break;
		      }
		//------------------------------------------------------------//
		if(szachownica.wyjscie_poza_tablice(pio.poz.I-1,pio.poz.J-1)==false)
		  for(int i=0; szachownica.wyjscie_poza_tablice(pio.poz.I-2-i,pio.poz.J-2-i)==false; i++)
		    if(szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J-1-i).bialy==false&&
		       szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J-1-i).brak==false)
		      if(szachownica.wyszukajPionek(pio.poz.I-2-i, pio.poz.J-2-i).brak==true)
			{
			  while(szachownica.wyjscie_poza_tablice(pio.poz.I-2-i,pio.poz.J-2-i)==false
				&& szachownica.wyszukajPionek(pio.poz.I-2-i, pio.poz.J-2-i).brak==true)
			    {
			      pom.I=pio.poz.I-2-i; pom.J=pio.poz.J-2-i;
			      wyjscie.push(pom);
			      i++;
			    }
			  break;
			}
		//------------------------------------------------------------//
		if(szachownica.wyjscie_poza_tablice(pio.poz.I-1,pio.poz.J+1)==false)
		  for(int i=0; szachownica.wyjscie_poza_tablice(pio.poz.I-2-i,pio.poz.J+2+i)==false; i++)
		    if(szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J+1+i).bialy==false&&
		       szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J+1+i).brak==false)
		      if(szachownica.wyszukajPionek(pio.poz.I-2-i, pio.poz.J+2+i).brak==true)
			{
			  while(szachownica.wyjscie_poza_tablice(pio.poz.I-2-i,pio.poz.J+2+i)==false
				&& szachownica.wyszukajPionek(pio.poz.I-2-i, pio.poz.J+2+i).brak==true)
			    {
			      pom.I=pio.poz.I-2-i; pom.J=pio.poz.J+2+i;
			      wyjscie.push(pom);
			      i++;
			    }
			  break;
			}
		//------------------------------------------------------------//
	      }
	    }
	  else return wyjscie;
	}
      else
	{
	  for(int i=1; szachownica.wyjscie_poza_tablice(pio.poz.I+i,pio.poz.J+i)==false &&
		szachownica.wyszukajPionek(pio.poz.I+i, pio.poz.J+i).brak==true; i++)
	    {
	      pom.I=pio.poz.I+i; pom.J=pio.poz.J+i;
	      wyjscie.push(pom); 
	    }
	  for(int i=1; szachownica.wyjscie_poza_tablice(pio.poz.I+i,pio.poz.J-i)==false &&
		szachownica.wyszukajPionek(pio.poz.I+i, pio.poz.J-i).brak==true; i++)
	    {
	      pom.I=pio.poz.I+i; pom.J=pio.poz.J-i;
	      wyjscie.push(pom); 
	    }
	  for(int i=1; szachownica.wyjscie_poza_tablice(pio.poz.I-i,pio.poz.J+i)==false &&
		szachownica.wyszukajPionek(pio.poz.I-i, pio.poz.J+i).brak==true; i++)
	    {
	      pom.I=pio.poz.I-i; pom.J=pio.poz.J+i;
	      wyjscie.push(pom); 
	    }
	  for(int i=1; szachownica.wyjscie_poza_tablice(pio.poz.I-i,pio.poz.J-i)==false &&
		szachownica.wyszukajPionek(pio.poz.I-i, pio.poz.J-i).brak==true; i++)
	    {
	      pom.I=pio.poz.I-i; pom.J=pio.poz.J-i;
	      wyjscie.push(pom); 
	    }
	}
    }
  if(pio.bialy==false)
    {
      if(CzyBicie('C')==true)
	{
	  if(CzyBicie(pio)==true)
	    {
	      {
		for(int i=0; szachownica.wyjscie_poza_tablice(pio.poz.I+2+i,pio.poz.J+2+i)==false; i++)
		  if(szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J+1+i).bialy==true &&
		     szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J+1+i).brak==false)
		    if(szachownica.wyszukajPionek(pio.poz.I+2+i, pio.poz.J+2+i).brak==true)
		      {
			  while(szachownica.wyjscie_poza_tablice(pio.poz.I+2+i,pio.poz.J+2+i)==false
				&& szachownica.wyszukajPionek(pio.poz.I+2+i, pio.poz.J+2+i).brak==true)
			    {
			      pom.I=pio.poz.I+2+i; pom.J=pio.poz.J+2+i;
			      wyjscie.push(pom);
			      i++;
			    }

		      }
		//-----------------------------------------------------------//
		for(int i=0; szachownica.wyjscie_poza_tablice(pio.poz.I+2+i,pio.poz.J-2-i)==false; i++)
		  if(szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J-1-i).bialy==true &&
		     szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J-1-i).brak==false)
		    if(szachownica.wyszukajPionek(pio.poz.I+2+i, pio.poz.J-2-i).brak==true)
		      {
			  while(szachownica.wyjscie_poza_tablice(pio.poz.I+2+i,pio.poz.J-2-i)==false
				&& szachownica.wyszukajPionek(pio.poz.I+2+i, pio.poz.J-2-i).brak==true)
			    {
			      pom.I=pio.poz.I+2+i; pom.J=pio.poz.J-2-i;
			      wyjscie.push(pom);
			      i++;
			    }
			  break;
		      }
		
		//------------------------------------------------------------//
		for(int i=0; szachownica.wyjscie_poza_tablice(pio.poz.I-2-i,pio.poz.J-2-i)==false; i++)
		  if(szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J-1-i).bialy==true &&
		     szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J-1-i).brak==false)
		    if(szachownica.wyszukajPionek(pio.poz.I-2-i, pio.poz.J-2-i).brak==true)
		      {
			  while(szachownica.wyjscie_poza_tablice(pio.poz.I-2-i,pio.poz.J-2-i)==false
				&& szachownica.wyszukajPionek(pio.poz.I-2-i, pio.poz.J-2-i).brak==true)
			    {
			      pom.I=pio.poz.I-2-i; pom.J=pio.poz.J-2-i;
			      wyjscie.push(pom);
			      i++;
			    }
			  break;
		      }
		//------------------------------------------------------------//
		for(int i=0; szachownica.wyjscie_poza_tablice(pio.poz.I-2-i,pio.poz.J+2+i)==false; i++)
		  if(szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J+1+i).bialy==true &&
		     szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J+1+i).brak==false)
		    if(szachownica.wyszukajPionek(pio.poz.I-2-i, pio.poz.J+2+i).brak==true)
		      {
			  while(szachownica.wyjscie_poza_tablice(pio.poz.I-2-i,pio.poz.J+2+i)==false
				&& szachownica.wyszukajPionek(pio.poz.I-2-i, pio.poz.J+2+i).brak==true)
			    {
			      pom.I=pio.poz.I-2-i; pom.J=pio.poz.J+2+i;
			      wyjscie.push(pom);
			      i++;
			    }
			  break;
		      }
		//------------------------------------------------------------//
	      }
	    }
	  else return wyjscie;
	}
      else
	{
	  for(int i=1; szachownica.wyjscie_poza_tablice(pio.poz.I+i,pio.poz.J+i)==false &&
		szachownica.wyszukajPionek(pio.poz.I+i, pio.poz.J+i).brak==true; i++)
	    {
	      pom.I=pio.poz.I+i; pom.J=pio.poz.J+i;
	      wyjscie.push(pom); 
	    }
	  for(int i=1; szachownica.wyjscie_poza_tablice(pio.poz.I+i,pio.poz.J-i)==false &&
		szachownica.wyszukajPionek(pio.poz.I+i, pio.poz.J-i).brak==true; i++)
	    {
	      pom.I=pio.poz.I+i; pom.J=pio.poz.J-i;
	      wyjscie.push(pom); 
	    }
	  for(int i=1; szachownica.wyjscie_poza_tablice(pio.poz.I-i,pio.poz.J+i)==false &&
		szachownica.wyszukajPionek(pio.poz.I-i, pio.poz.J+i).brak==true; i++)
	    {
	      pom.I=pio.poz.I-i; pom.J=pio.poz.J+i;
	      wyjscie.push(pom); 
	    }
	  for(int i=1; szachownica.wyjscie_poza_tablice(pio.poz.I-i,pio.poz.J-i)==false &&
		szachownica.wyszukajPionek(pio.poz.I-i, pio.poz.J-i).brak==true; i++)
	    {
	      pom.I=pio.poz.I-i; pom.J=pio.poz.J-i;
	      wyjscie.push(pom); 
	    }
	}
    }
  queue<pozycja> pp=wyjscie;
  while(pp.empty()==false)
    {
      cout<<pp.front().I<<" "<<pp.front().J<<endl;
      pp.pop();
    }
  return wyjscie;
}

int ruchy::RuchKrolowa(int ID, char kolor, pozycja po)
{
  pionek pom;
  pom=szachownica.wyszukajPionek(ID,kolor);
  return RuchKrolowa(pom, po);
}
int ruchy::RuchKrolowa(pionek pio, pozycja po)
{
  if(pio.bialy==true)
    {
      if(pio.poz.I<po.I)
	{
	  if(pio.poz.J<po.J)
	    {
	      for(int i=1; szachownica.wyszukajPionek(po.I-i, po.J-i)!=pio; i++)
		{
		  if(szachownica.wyszukajPionek(po.I-i, po.J-i).brak==false && szachownica.wyszukajPionek(po.I-i, po.J-i)!=pio)
		    {
		      szachownica.przestaw(pio, po.I, po.J);
		      szachownica.usun(po.I-i, po.J-i);
		      return 1;
		    }
		}
	      szachownica.przestaw(pio, po.I, po.J);
	      return 0;
	    }
	  else
	    {
	      for(int i=1; szachownica.wyszukajPionek(po.I-i, po.J+i)!=pio; i++)
		{
		  if(szachownica.wyszukajPionek(po.I-i, po.J+i).brak==false && szachownica.wyszukajPionek(po.I-i, po.J+i)!=pio)
		    {
		      szachownica.przestaw(pio, po.I, po.J);
		      szachownica.usun(po.I-i, po.J+i);
		      return 1;
		    }
		}
	      szachownica.przestaw(pio, po.I, po.J);
	      return 0;
	    }
	}
      else
	{
	  if(pio.poz.J<po.J)
	    {
	      for(int i=1; szachownica.wyszukajPionek(po.I+i, po.J-i)!=pio; i++)
		{
		  if(szachownica.wyszukajPionek(po.I+i, po.J-i).brak==false && szachownica.wyszukajPionek(po.I+i, po.J-i)!=pio)
		    {
		      szachownica.przestaw(pio, po.I, po.J);
		      szachownica.usun(po.I+i, po.J-i);
		      return 1;
		    }
		}
	      szachownica.przestaw(pio, po.I, po.J);
	      return 0;
	    }
	  else
	    {
	      for(int i=1; szachownica.wyszukajPionek(po.I+i, po.J+i)!=pio; i++)
		{
		  if(szachownica.wyszukajPionek(po.I+i, po.J+i).brak==false && szachownica.wyszukajPionek(po.I+i, po.J+i)!=pio)
		    {
		      szachownica.przestaw(pio, po.I, po.J);
		      szachownica.usun(po.I+i, po.J+i);
		      return 1;
		    }
		}
	      szachownica.przestaw(pio, po.I, po.J);
	      return 0;
	    }
	}
    }
  else
    {
      if(pio.poz.I<po.I)
	{
	  if(pio.poz.J<po.J)
	    {
	      for(int i=1; szachownica.wyszukajPionek(po.I-i, po.J-i)!=pio; i++)
		{
		  if(szachownica.wyszukajPionek(po.I-i, po.J-i).brak==false && szachownica.wyszukajPionek(po.I-i, po.J-i)!=pio)
		    {
		      szachownica.przestaw(pio, po.I, po.J);
		      szachownica.usun(po.I-i, po.J-i);
		      return -1;
		    }
		}
	      szachownica.przestaw(pio, po.I, po.J);
	      return 0;
	    }
	  else
	    {
	      for(int i=1; szachownica.wyszukajPionek(po.I-i, po.J+i)!=pio; i++)
		{
		  if(szachownica.wyszukajPionek(po.I-i, po.J+i).brak==false && szachownica.wyszukajPionek(po.I-i, po.J+i)!=pio)
		    {
		      szachownica.przestaw(pio, po.I, po.J);
		      szachownica.usun(po.I-i, po.J+i);
		      return -1;
		    }
		}
	      szachownica.przestaw(pio, po.I, po.J);
	      return 0;
	    }
	}
      else
	{
	  if(pio.poz.J<po.J)
	    {
	      for(int i=1; szachownica.wyszukajPionek(po.I+i, po.J-i)!=pio; i++)
		{
		  if(szachownica.wyszukajPionek(po.I+i, po.J-i).brak==false && szachownica.wyszukajPionek(po.I+i, po.J-i)!=pio)
		    {
		      szachownica.przestaw(pio, po.I, po.J);
		      szachownica.usun(po.I+i, po.J-i);
		      return 1;
		    }
		}
	      szachownica.przestaw(pio, po.I, po.J);
	      return 0;
	      
	    }
	  else
	    {
	      for(int i=1; szachownica.wyszukajPionek(po.I+i, po.J+i)!=pio; i++)
		{
		  if(szachownica.wyszukajPionek(po.I+i, po.J+i).brak==false && szachownica.wyszukajPionek(po.I+i, po.J+i)!=pio)
		    {
		      szachownica.przestaw(pio, po.I, po.J);
		      szachownica.usun(po.I+1, po.J+1);
		      return 1;
		    }
		}
	      szachownica.przestaw(pio, po.I, po.J);
	      return 0;
	    }
	}
    }
}
queue<int> ruchy::KrolowaBialaDostep()
{
  queue<int> wyjscie;
  vector<pionek> pom=szachownica.BialeWGrze();
  queue<pozycja> ruch;
  for(unsigned int i=0; i<pom.size(); i++)
    {
      if(pom[i].damka==true)
	{
	  if(CzyBicie(pom[i])==true)
	    wyjscie.push(pom[i].id);
	  else
	    {
	      ruch=KrolowaRuchy(pom[i]);
	      if(ruch.size()!=0)
		{
		  wyjscie.push(pom[i].id);
		}
	    }
	}
    }
  return wyjscie;
}
queue<int> ruchy::KrolowaCzarnaDostep()
{
  queue<int> wyjscie;
  vector<pionek> pom=szachownica.CzarneWGrze();
  queue<pozycja> ruch;
  for(unsigned int i=0; i<pom.size(); i++)
    {
      if(pom[i].damka==true)
	{
	  if(CzyBicie(pom[i])==true)
	    wyjscie.push(pom[i].id);
	  else
	    {
	      ruch=KrolowaRuchy(pom[i]);
	      if(ruch.size()!=0)
		{
		  wyjscie.push(pom[i].id);
		}
	    }
	}
    }
  return wyjscie;
}
list<int> ruchy::DostepneBiciaCzarne()
{
  list<int> wyjscie;
  vector<pionek> pom=szachownica.CzarneWGrze();
  for(unsigned int i=0; i<pom.size(); i++)
    {
      if(CzyBicie(pom[i])==true)
	wyjscie.push_back(pom[i].id);
    }
  return wyjscie;
}
list<int> ruchy::DostepneBiciaBiale()
{
  list<int> wyjscie;
  vector<pionek> pom=szachownica.BialeWGrze();
  for(unsigned int i=0; i<pom.size(); i++)
    {
      if(CzyBicie(pom[i])==true)
	wyjscie.push_back(pom[i].id);
    }
  return wyjscie;
}
queue<int> ruchy::DostepneBiale()
{
  queue<int> wyjscie;
  vector<pionek> pom=szachownica.BialeWGrze();
  //cout<<"ogolnie dostepnych pionkow na planszy "<< pom.size()<<endl;
  for(unsigned int i=0; i<pom.size(); i++)
    {
      if(pom[i].damka==false)
	{
	  if(CzyBicie(pom[i])==true)
	    wyjscie.push(pom[i].id);
	  else
	    {
	      if(DostepPrawo(pom[i])==true)
		{
		  wyjscie.push(pom[i].id);
		}
	      else
		  if(DostepLewo(pom[i])==true)
		    {
		      wyjscie.push(pom[i].id);
		    }
	    }
	}
    }
  return wyjscie;
}
queue<int> ruchy::DostepneCzarne()
{
  queue<int> wyjscie;
  vector<pionek> pom=szachownica.CzarneWGrze();
  //cout<<"ogolnie dostepnych pionkow na planszy "<< pom.size()<<endl;
  for(unsigned int i=0; i<pom.size(); i++)
    {
      if(pom[i].damka==false)
	{
	  if(CzyBicie(pom[i])==true)
	    wyjscie.push(pom[i].id);
	  else
	    {
	      if(DostepPrawo(pom[i])==true)
		{
		  wyjscie.push(pom[i].id);
		}
	      else
		  if(DostepLewo(pom[i])==true)
		    {
		      wyjscie.push(pom[i].id);
		    }
	    }
	}
    }
  return wyjscie;
}
int ruchy::RuchPrawo(int ID, char kolor)
{
  pionek pom;
  pom=szachownica.wyszukajPionek(ID,kolor);
  return RuchPrawo(pom);
}
int ruchy::RuchLewo(int ID, char kolor)
{
  pionek pom;
  pom=szachownica.wyszukajPionek(ID,kolor);
  return RuchLewo(pom);
}
int ruchy::RuchPrawo(pionek pio)
{
  if(pio.bialy==true)
    {
      if(CzyBiciePG(pio)==true)
	{
	  BiciePrawoPrz(pio);
	  return 1;
	}
      else
	{
	  szachownica.przestaw(pio,pio.poz.I+1, pio.poz.J+1);
	  return 0;
	}
    }
  else
    {
      if(CzyBiciePD(pio)==true)
	{
	  BiciePrawoPrz(pio);
	  return -1;
	}
      else
	{
	  szachownica.przestaw(pio,pio.poz.I-1, pio.poz.J+1);
	  return 0;
	}
    }
  return 0;
}
int ruchy::RuchLewo(pionek pio)
{
  if(pio.bialy==true)
    {
      if(CzyBicieLG(pio)==true)
	{
	  BicieLewoPrz(pio);
	  return 1;
	}
      else
	{
	  szachownica.przestaw(pio,pio.poz.I+1, pio.poz.J-1);
	  return 0;
	}
    }
  else
    {
      if(CzyBicieLD(pio)==true)
	{
	  BicieLewoPrz(pio);
	  return -1;
	}
      else
	{
	  szachownica.przestaw(pio,pio.poz.I-1, pio.poz.J-1);
	  return 0;
	}
    }
  return 0;
}
bool ruchy::BiciePrawoTyl(int ID, char kolor)
{
  pionek pom;
  pom=szachownica.wyszukajPionek(ID,kolor);
  return BiciePrawoTyl(pom);
}
bool ruchy::BiciePrawoTyl(pionek pio)
{
  if(pio.bialy==true)
    if(CzyBiciePD(pio)==true)
      {
	szachownica.usun(pio.poz.I-1,pio.poz.J+1);
	szachownica.przestaw(pio, pio.poz.I-2, pio.poz.J+2);
	return true;
      }
  if(pio.bialy==false)
    if(CzyBiciePG(pio)==true)
      {
	szachownica.usun(pio.poz.I+1,pio.poz.J+1);
	szachownica.przestaw(pio, pio.poz.I+2, pio.poz.J+2);
	return true;
      }
  return false;
}
bool ruchy::BicieLewoPrz(pionek pio)
{
  if(pio.bialy==true)
    if(CzyBicieLG(pio)==true)
      {
	szachownica.usun(pio.poz.I+1,pio.poz.J-1);
	szachownica.przestaw(pio, pio.poz.I+2, pio.poz.J-2);
	return true;
      }
  if(pio.bialy==false)
    if(CzyBicieLD(pio)==true)
      {
	szachownica.usun(pio.poz.I-1,pio.poz.J-1);
	szachownica.przestaw(pio, pio.poz.I-2, pio.poz.J-2);
	return true;
      }
  return false;
}
bool ruchy::BiciePrawoPrz(pionek pio)
{
  if(pio.bialy==true)
    if(CzyBiciePG(pio)==true)
      {
	szachownica.usun(pio.poz.I+1,pio.poz.J+1);
	szachownica.przestaw(pio, pio.poz.I+2, pio.poz.J+2);
	return true;
      }
  if(pio.bialy==false)
    if(CzyBiciePD(pio)==true)
      {
	szachownica.usun(pio.poz.I-1,pio.poz.J+1);
	szachownica.przestaw(pio, pio.poz.I-2, pio.poz.J+2);
	return true;
      }
  return false;
}
bool ruchy::BicieLewoTyl(int ID, char kolor)
{
  pionek pom;
  pom=szachownica.wyszukajPionek(ID,kolor);
  return BicieLewoTyl(pom);
}
bool ruchy::BicieLewoTyl(pionek pio)
{
  if(pio.bialy==true)
    if(CzyBicieLD(pio)==true)
      {
	szachownica.usun(pio.poz.I-1,pio.poz.J-1);
	szachownica.przestaw(pio, pio.poz.I-2, pio.poz.J-2);
	return true;
      }
  if(pio.bialy==false)
    if(CzyBicieLG(pio)==true)
      {
	szachownica.usun(pio.poz.I+1,pio.poz.J-1);
	szachownica.przestaw(pio, pio.poz.I+2, pio.poz.J-2);
	return true;
      }
  return false;
}
bool ruchy::CzyBicie(char kolor='n')
{
  vector<pionek> pom;
  int licz=0;
  if(kolor=='B')
    {
      pom=szachownica.BialeWGrze();
      for(unsigned int i=0; i<pom.size(); i++)
	{
	  licz=licz+CzyBicie(pom[i]);
	}
      if(licz>0)
	return true;
    }
  if(kolor=='C')
    {
      pom=szachownica.CzarneWGrze();
      for(unsigned int i=0; i<pom.size(); i++)
	{
	  licz=licz+CzyBicie(pom[i]);
	}
      if(licz>0)
	return true;
    }
  if(kolor=='n')
    {
      pom=szachownica.CzarneWGrze();
      for(unsigned int i=0; i<pom.size(); i++)
	{
	  licz=licz+CzyBicie(pom[i]);
	}
      pom=szachownica.BialeWGrze();
      for(unsigned int i=0; i<pom.size(); i++)
	{
	  licz=licz+CzyBicie(pom[i]);
	}
      if(licz>0)
	return true;
    }
  return false;
}

//########################################################################//

bool ruchy::CzyBicie(int x, int y)
{
  pionek pom;
  pom=szachownica.wyszukajPionek(x,y);
  if(pom.brak==true)
    throw brak_pionka();
  return CzyBicie(pom);
}

//########################################################################//

bool ruchy::CzyBicie(int ID, char kolor)
{
  pionek pom;
  pom=szachownica.wyszukajPionek(ID,kolor);
  return CzyBicie(pom);
}

//########################################################################//

bool ruchy::CzyBicie(pionek pio)
{
  //###################### DLA ZWYKLYCH PIONKOW ############################
  //<<<<<<<<<<<<<<<<<<<<<<<<<<<<< BIALE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
  if(pio.bialy==true)
    {
//==========================PRAWY GORNY ROG===============================
      if(szachownica.wyjscie_poza_tablice(pio.poz.I+1, pio.poz.J+1)==false 
	&& szachownica.wyjscie_poza_tablice(pio.poz.I+2, pio.poz.J+2)==false)
	
	if(szachownica.wyszukajPionek(pio.poz.I+1, pio.poz.J+1).bialy==false &&
	   szachownica.wyszukajPionek(pio.poz.I+1, pio.poz.J+1).brak==false)
	  if(szachownica.wyszukajPionek(pio.poz.I+2, pio.poz.J+2).brak==true)
	    return true;
//==========================LEWY GORNY ROG===============================
      if(szachownica.wyjscie_poza_tablice(pio.poz.I+1, pio.poz.J-1)==false
	 && szachownica.wyjscie_poza_tablice(pio.poz.I+2, pio.poz.J-2)==false)
	
	if(szachownica.wyszukajPionek(pio.poz.I+1, pio.poz.J-1).bialy==false &&
	   szachownica.wyszukajPionek(pio.poz.I+1, pio.poz.J-1).brak==false)
	  if(szachownica.wyszukajPionek(pio.poz.I+2, pio.poz.J-2).brak==true)
	    return true;	
//==========================PRAWY DOLNY ROG===============================	
      if(szachownica.wyjscie_poza_tablice(pio.poz.I-1, pio.poz.J+1)==false 
	 && szachownica.wyjscie_poza_tablice(pio.poz.I-2, pio.poz.J+2)==false)
	
	if(szachownica.wyszukajPionek(pio.poz.I-1, pio.poz.J+1).bialy==false &&
	   szachownica.wyszukajPionek(pio.poz.I-1, pio.poz.J+1).brak==false)
	  if(szachownica.wyszukajPionek(pio.poz.I-2, pio.poz.J+2).brak==true)
	    return true;
//==========================LEWY DOLNY ROG===============================				
      if(szachownica.wyjscie_poza_tablice(pio.poz.I-1, pio.poz.J-1)==false
	 && szachownica.wyjscie_poza_tablice(pio.poz.I-2, pio.poz.J-2)==false)
	
	if(szachownica.wyszukajPionek(pio.poz.I-1, pio.poz.J-1).bialy==false &&
	   szachownica.wyszukajPionek(pio.poz.I-1, pio.poz.J-1).brak==false)
	  if(szachownica.wyszukajPionek(pio.poz.I-2, pio.poz.J-2).brak==true)
	    return true;	
    }
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<< czarne >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
  if(pio.bialy==false)
    {
//==========================PRAWY GORNY ROG===============================
      if(szachownica.wyjscie_poza_tablice(pio.poz.I+1, pio.poz.J+1)==false 
	 && szachownica.wyjscie_poza_tablice(pio.poz.I+2, pio.poz.J+2)==false)
	
	if(szachownica.wyszukajPionek(pio.poz.I+1, pio.poz.J+1).bialy==true &&
	   szachownica.wyszukajPionek(pio.poz.I+1, pio.poz.J+1).brak==false)
	  if(szachownica.wyszukajPionek(pio.poz.I+2, pio.poz.J+2).brak==true)
	    return true;
      //==========================LEWY GORNY ROG===============================
      if(szachownica.wyjscie_poza_tablice(pio.poz.I+1, pio.poz.J-1)==false
	 && szachownica.wyjscie_poza_tablice(pio.poz.I+2, pio.poz.J-2)==false)
	
	if(szachownica.wyszukajPionek(pio.poz.I+1, pio.poz.J-1).bialy==true &&
	   szachownica.wyszukajPionek(pio.poz.I+1, pio.poz.J-1).brak==false)
	  if(szachownica.wyszukajPionek(pio.poz.I+2, pio.poz.J-2).brak==true)
	    return true;	
     //==========================PRAWY DOLNY ROG===============================	
      if(szachownica.wyjscie_poza_tablice(pio.poz.I-1, pio.poz.J+1)==false 
	 && szachownica.wyjscie_poza_tablice(pio.poz.I-2, pio.poz.J+2)==false)
	
	if(szachownica.wyszukajPionek(pio.poz.I-1, pio.poz.J+1).bialy==true &&
	   szachownica.wyszukajPionek(pio.poz.I-1, pio.poz.J+1).brak==false)
	  if(szachownica.wyszukajPionek(pio.poz.I-2, pio.poz.J+2).brak==true)
	    return true;
     //==========================LEWY DOLNY ROG===============================				
      if(szachownica.wyjscie_poza_tablice(pio.poz.I-1, pio.poz.J-1)==false
	 && szachownica.wyjscie_poza_tablice(pio.poz.I-2, pio.poz.J-2)==false)
	
	if(szachownica.wyszukajPionek(pio.poz.I-1, pio.poz.J-1).bialy==true &&
	   szachownica.wyszukajPionek(pio.poz.I-1, pio.poz.J-1).brak==false)
	  if(szachownica.wyszukajPionek(pio.poz.I-2, pio.poz.J-2).brak==true)
	    return true;	
    } 
  //############################ DLA DAMEK ###############################
  if(pio.damka==true)
    {
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<< BIALE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
      if(pio.bialy==true)
	{
//==========================PRAWY GORNY ROG===============================
	  if(szachownica.wyjscie_poza_tablice(pio.poz.I+1,pio.poz.J+1)==false)
	    for(int i=0; szachownica.wyjscie_poza_tablice(pio.poz.I+2+i,pio.poz.J+2+i)==false
		  && (szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J+1+i).brak==false
		         && szachownica.wyszukajPionek(pio.poz.I+2+i, pio.poz.J+2+i).brak==false); i++)
	      if(szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J+1+i).bialy==false &&
		 szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J+1+i).brak==false)
		if(szachownica.wyszukajPionek(pio.poz.I+2+i, pio.poz.J+2+i).brak==true)
		  return true;
//==========================LEWY GORNY ROG===============================
	  if(szachownica.wyjscie_poza_tablice(pio.poz.I+1,pio.poz.J-1)==false)
	    for(int i=0; szachownica.wyjscie_poza_tablice(pio.poz.I+2+i,pio.poz.J-2-i)==false
		  && (szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J-1-i).brak==false
		         && szachownica.wyszukajPionek(pio.poz.I+2+i, pio.poz.J-2-i).brak==false); i++)
	      if(szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J-1-i).bialy==false&&
		 szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J-1-i).brak==false)
		if(szachownica.wyszukajPionek(pio.poz.I+2+i, pio.poz.J-2-i).brak==true)
		  return true;	
//==========================PRAWY DOLNY ROG===============================	
	  if(szachownica.wyjscie_poza_tablice(pio.poz.I-1,pio.poz.J+1)==false)
	    for(int i=0; szachownica.wyjscie_poza_tablice(pio.poz.I-2-i,pio.poz.J+2+i)==false
		  && (szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J+1+i).brak==false
		         && szachownica.wyszukajPionek(pio.poz.I-2-i, pio.poz.J+2+i).brak==false); i++)
	      if(szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J+1+i).bialy==false&&
		 szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J+1+i).brak==false)
		if(szachownica.wyszukajPionek(pio.poz.I-2-i, pio.poz.J+2+i).brak==true)
		  return true;
//==========================LEWY DOLNY ROG===============================				
	  if(szachownica.wyjscie_poza_tablice(pio.poz.I-1,pio.poz.J-1)==false)
	    for(int i=0; szachownica.wyjscie_poza_tablice(pio.poz.I-2-i,pio.poz.J-2-i)==false
		  && (szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J-1-i).brak==false
		         && szachownica.wyszukajPionek(pio.poz.I-2-i, pio.poz.J-2-i).brak==false) ; i++)
	      if(szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J-1-i).bialy==false&&
		 szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J-1-i).brak==false)
		if(szachownica.wyszukajPionek(pio.poz.I-2-i, pio.poz.J-2-i).brak==true)
		  return true;	
	}
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< CZARNE >>>>>>>>>>>>>>>>>>>>>>>>>>>>
      if(pio.bialy==false)
	{
//==========================PRAWY GORNY ROG===============================
	  if(szachownica.wyjscie_poza_tablice(pio.poz.I+1,pio.poz.J+1)==false)
	    for(int i=0; szachownica.wyjscie_poza_tablice(pio.poz.I+2+i,pio.poz.J+2+i)==false
		  && (szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J+1+i).brak==false
		         && szachownica.wyszukajPionek(pio.poz.I+2+i, pio.poz.J+2+i).brak==false); i++)
	      if(szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J+1+i).bialy==true &&
		 szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J+1+i).brak==false)
		if(szachownica.wyszukajPionek(pio.poz.I+2+i, pio.poz.J+2+i).brak==true)
		  return true;
//==========================LEWY GORNY ROG===============================
	  if(szachownica.wyjscie_poza_tablice(pio.poz.I+1,pio.poz.J-1)==false)
	    for(int i=0; szachownica.wyjscie_poza_tablice(pio.poz.I+2+i,pio.poz.J-2-i)==false
		  && (szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J-1-i).brak==false
		         && szachownica.wyszukajPionek(pio.poz.I+2+i, pio.poz.J-2-i).brak==false); i++)
	      if(szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J-1-i).bialy==true &&
		 szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J-1-i).brak==false)
		if(szachownica.wyszukajPionek(pio.poz.I+2+i, pio.poz.J-2-i).brak==true)
		  return true;	
//==========================PRAWY DOLNY ROG===============================	
	  if(szachownica.wyjscie_poza_tablice(pio.poz.I-1,pio.poz.J+1)==false)
	    for(int i=0; szachownica.wyjscie_poza_tablice(pio.poz.I-2-i,pio.poz.J+2+i)==false
		  && (szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J+1+i).brak==false
		         && szachownica.wyszukajPionek(pio.poz.I-2-i, pio.poz.J+2+i).brak==false); i++)
	      if(szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J+1+i).bialy==true &&
		 szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J+1+i).brak==false)
		if(szachownica.wyszukajPionek(pio.poz.I-2-i, pio.poz.J+2+i).brak==true)
		  return true;
//==========================LEWY DOLNY ROG===============================				
	  if(szachownica.wyjscie_poza_tablice(pio.poz.I-1,pio.poz.J-1)==false)
	    for(int i=0; szachownica.wyjscie_poza_tablice(pio.poz.I-2-i,pio.poz.J-2-i)==false
		  && (szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J-1-i).brak==false
		         && szachownica.wyszukajPionek(pio.poz.I-2-i, pio.poz.J-2-i).brak==false); i++)
	      if(szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J-1-i).bialy==true &&
		 szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J-1-i).brak==false)
		if(szachownica.wyszukajPionek(pio.poz.I-2-i, pio.poz.J-2-i).brak==true)
		  return true;	
	}
    }
  return false;
}

//########################################################################//

bool ruchy::DostepPrawo(int ID, char kolor)
{
  pionek pom;
  pom=szachownica.wyszukajPionek(ID,kolor);
  return DostepPrawo(pom);
}

//########################################################################//

bool ruchy::DostepPrawo(pionek pio)
{
  if(pio.poz.J==rozmiar-1)
    return false;


  if(pio.bialy==true)
  {
    if(CzyBicie('B')==true && CzyBicie(pio)==false)
      return false;
    if(CzyBiciePG(pio)==true)
      return true;
    if(szachownica.wyszukajPionek(pio.poz.I+1, pio.poz.J+1).brak==true)
      return true;
    if(pio.damka==true)
      if(szachownica.wyszukajPionek(pio.poz.I-1, pio.poz.J+1).brak==true)
	return true;
  }
  if(pio.bialy==false)
  {
    if(CzyBicie('C')==true && CzyBicie(pio)==false)
      return false;
    if(CzyBiciePD(pio)==true)
      return true;
    if(szachownica.wyszukajPionek(pio.poz.I-1, pio.poz.J+1).brak==true)
      return true;
    if(pio.damka==true)
      if(szachownica.wyszukajPionek(pio.poz.I+1, pio.poz.J-1).brak==true)
	return true;
  }
  return false;
}

//########################################################################//

bool ruchy::DostepPrawo(int x, int y)
{
  pionek pom;
  pom=szachownica.wyszukajPionek(x,y);
  if(pom.brak==true)
    throw brak_pionka();
  return DostepPrawo(pom);
}

//########################################################################//

bool ruchy::DostepLewo(int ID, char kolor)
{
  pionek pom;
  pom=szachownica.wyszukajPionek(ID,kolor);
  return DostepLewo(pom);
}
bool ruchy::DostepLewo(pionek pio)
{
  if(pio.poz.J==0)
    return false;

  
  if(pio.bialy==true)
  {
    if(CzyBicie('B')==true && CzyBicie(pio)==false)
      return false;
    if(CzyBicieLG(pio)==true)
      return true;
    if(szachownica.wyszukajPionek(pio.poz.I+1, pio.poz.J-1).brak==true)
      return true;
    if(pio.damka==true)
      if(szachownica.wyszukajPionek(pio.poz.I-1, pio.poz.J-1).brak==true)
	return true;
  }
  if(pio.bialy==false)
  {
    if(CzyBicie('C')==true && CzyBicie(pio)==false)
      return false;
    if(CzyBicieLD(pio)==true)
      return true;	
    if(szachownica.wyszukajPionek(pio.poz.I-1, pio.poz.J-1).brak==true)
      return true;
    if(pio.damka==true)
      if(szachownica.wyszukajPionek(pio.poz.I+1, pio.poz.J-1).brak==true)
	return true;
  }
  return false;
}
bool ruchy::DostepLewo(int x, int y)
{
  pionek pom;
  pom=szachownica.wyszukajPionek(x,y);
  if(pom.brak==true)
    throw brak_pionka();
  return DostepLewo(pom);
}
bool ruchy::CzyBiciePG(pionek pio)
{
  //###################### DLA ZWYKLYCH PIONKOW ############################
  //<<<<<<<<<<<<<<<<<<<<<<<<<<<<< BIALE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
  if(pio.bialy==true)
    {
//==========================PRAWY GORNY ROG===============================
      if(szachownica.wyjscie_poza_tablice(pio.poz.I+1, pio.poz.J+1)==false 
	&& szachownica.wyjscie_poza_tablice(pio.poz.I+2, pio.poz.J+2)==false)
	
	if(szachownica.wyszukajPionek(pio.poz.I+1, pio.poz.J+1).bialy==false &&
           szachownica.wyszukajPionek(pio.poz.I+1, pio.poz.J+1).brak==false)
	  if(szachownica.wyszukajPionek(pio.poz.I+2, pio.poz.J+2).brak==true)
	    return true;
	}
  //<<<<<<<<<<<<<<<<<<<<<<<<<<<<< czarne >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
  if(pio.bialy==false)
    {
//==========================PRAWY GORNY ROG===============================
      if(szachownica.wyjscie_poza_tablice(pio.poz.I+1, pio.poz.J+1)==false 
	 && szachownica.wyjscie_poza_tablice(pio.poz.I+2, pio.poz.J+2)==false)
	
	if(szachownica.wyszukajPionek(pio.poz.I+1, pio.poz.J+1).bialy==true &&
           szachownica.wyszukajPionek(pio.poz.I+1, pio.poz.J+1).brak==false)
	  if(szachownica.wyszukajPionek(pio.poz.I+2, pio.poz.J+2).brak==true)
	    return true;
    }
  //############################ DLA DAMEK ###############################
  if(pio.damka==true)
    {
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<< BIALE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
      if(pio.bialy==true)
	{
//==========================PRAWY GORNY ROG===============================
	  if(szachownica.wyjscie_poza_tablice(pio.poz.I+1,pio.poz.J+1)==false)
	    for(int i=0; szachownica.wyjscie_poza_tablice(pio.poz.I+2+i,pio.poz.J+2+i)==false; i++)
	      if(szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J+1+i).bialy==false &&
		 szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J+1+i).brak==false)
		if(szachownica.wyszukajPionek(pio.poz.I+2+i, pio.poz.J+2+i).brak==true)
		  return true;
	}
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< CZARNE >>>>>>>>>>>>>>>>>>>>>>>>>>>>
      if(pio.bialy==false)
	{
//==========================PRAWY GORNY ROG===============================
	  if(szachownica.wyjscie_poza_tablice(pio.poz.I+1,pio.poz.J+1)==false)
	    for(int i=0; szachownica.wyjscie_poza_tablice(pio.poz.I+2+i,pio.poz.J+2+i)==false; i++)
	      if(szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J+1+i).bialy==true &&
		 szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J+1+i).brak==false)
		if(szachownica.wyszukajPionek(pio.poz.I+2+i, pio.poz.J+2+i).brak==true)
		  return true;
	}
    }
  return false;
}

bool ruchy::CzyBicieLG(pionek pio)
{
//###################### DLA ZWYKLYCH PIONKOW ############################
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<< BIALE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
  if(pio.bialy==true)
    {
//==========================LEWY GORNY ROG===============================
      if(szachownica.wyjscie_poza_tablice(pio.poz.I+1, pio.poz.J-1)==false
	 && szachownica.wyjscie_poza_tablice(pio.poz.I+2, pio.poz.J-2)==false)
	
	if(szachownica.wyszukajPionek(pio.poz.I+1, pio.poz.J-1).bialy==false &&
	   szachownica.wyszukajPionek(pio.poz.I+1, pio.poz.J-1).brak==false)
	  if(szachownica.wyszukajPionek(pio.poz.I+2, pio.poz.J-2).brak==true)
	    return true;
    }
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<< czarne >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
  if(pio.bialy==false)
    {
//==========================LEWY GORNY ROG===============================
      if(szachownica.wyjscie_poza_tablice(pio.poz.I+1, pio.poz.J-1)==false
	 && szachownica.wyjscie_poza_tablice(pio.poz.I+2, pio.poz.J-2)==false)
	
	if(szachownica.wyszukajPionek(pio.poz.I+1, pio.poz.J-1).bialy==true&&
	   szachownica.wyszukajPionek(pio.poz.I+1, pio.poz.J-1).brak==false)
	  if(szachownica.wyszukajPionek(pio.poz.I+2, pio.poz.J-2).brak==true)
	    return true;
    }
//############################ DLA DAMEK ###############################
  if(pio.damka==true)
    {
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<< BIALE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
      if(pio.bialy==true)
	{
//==========================LEWY GORNY ROG===============================
      if(szachownica.wyjscie_poza_tablice(pio.poz.I+1,pio.poz.J-1)==false)
	for(int i=0; szachownica.wyjscie_poza_tablice(pio.poz.I+2+i,pio.poz.J-2-i)==false; i++)
	  if(szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J-1-i).bialy==false&&
	   szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J-1-i).brak==false)
	    if(szachownica.wyszukajPionek(pio.poz.I+2+i, pio.poz.J-2-i).brak==true)
	      return true;
	}
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< CZARNE >>>>>>>>>>>>>>>>>>>>>>>>>>>>
      if(pio.bialy==false)
	{
//==========================LEWY GORNY ROG===============================
	  if(szachownica.wyjscie_poza_tablice(pio.poz.I+1,pio.poz.J-1)==false)
	    for(int i=0; szachownica.wyjscie_poza_tablice(pio.poz.I+2+i,pio.poz.J-2-i)==false; i++)
	      if(szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J-1-i).bialy==true&&
	   szachownica.wyszukajPionek(pio.poz.I+1+i, pio.poz.J-1-i).brak==false)
		if(szachownica.wyszukajPionek(pio.poz.I+2+i, pio.poz.J-2-i).brak==true)
		  return true;
	}
    }
  return false;
}
bool ruchy::CzyBiciePD(pionek pio)
{
  //###################### DLA ZWYKLYCH PIONKOW ############################
  //<<<<<<<<<<<<<<<<<<<<<<<<<<<<< BIALE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
  if(pio.bialy==true)
    {
//==========================PRAWY DOLNY ROG===============================	
      if(szachownica.wyjscie_poza_tablice(pio.poz.I-1, pio.poz.J+1)==false 
	 && szachownica.wyjscie_poza_tablice(pio.poz.I-2, pio.poz.J+2)==false)
	
	if(szachownica.wyszukajPionek(pio.poz.I-1, pio.poz.J+1).bialy==false &&
	   szachownica.wyszukajPionek(pio.poz.I-1, pio.poz.J+1).brak==false)
	  if(szachownica.wyszukajPionek(pio.poz.I-2, pio.poz.J+2).brak==true)
	    return true;
    }
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<< czarne >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
  if(pio.bialy==false)
    {
//==========================PRAWY DOLNY ROG===============================	
      if(szachownica.wyjscie_poza_tablice(pio.poz.I-1, pio.poz.J+1)==false 
	 && szachownica.wyjscie_poza_tablice(pio.poz.I-2, pio.poz.J+2)==false)
	
	if(szachownica.wyszukajPionek(pio.poz.I-1, pio.poz.J+1).bialy==true&&
	   szachownica.wyszukajPionek(pio.poz.I-1, pio.poz.J+1).brak==false)
	  if(szachownica.wyszukajPionek(pio.poz.I-2, pio.poz.J+2).brak==true)
	    return true;
    }
//############################ DLA DAMEK ###############################
  if(pio.damka==true)
    {
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<< BIALE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
      if(pio.bialy==true)
	{
//==========================PRAWY DOLNY ROG===============================	
	  if(szachownica.wyjscie_poza_tablice(pio.poz.I-1,pio.poz.J+1)==false)
	    for(int i=0; szachownica.wyjscie_poza_tablice(pio.poz.I-2-i,pio.poz.J+2+i)==false; i++)
	      if(szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J+1+i).bialy==false &&
		 szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J+1+i).brak==false)
		if(szachownica.wyszukajPionek(pio.poz.I-2-i, pio.poz.J+2+i).brak==true)
		  return true;
	}
//==========================PRAWY DOLNY ROG===============================	
	  if(szachownica.wyjscie_poza_tablice(pio.poz.I-1,pio.poz.J+1)==false)
	    for(int i=0; szachownica.wyjscie_poza_tablice(pio.poz.I-2-i,pio.poz.J+2+i)==false; i++)
	      if(szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J+1+i).bialy==true &&
		 szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J+1+i).brak==false)
		if(szachownica.wyszukajPionek(pio.poz.I-2-i, pio.poz.J+2+i).brak==true)
		  return true;
    }
  return false;
}
bool ruchy::CzyBicieLD(pionek pio)
{
 //###################### DLA ZWYKLYCH PIONKOW ############################
  //<<<<<<<<<<<<<<<<<<<<<<<<<<<<< BIALE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
  if(pio.bialy==true)
    {
//==========================LEWY DOLNY ROG===============================				
      if(szachownica.wyjscie_poza_tablice(pio.poz.I-1, pio.poz.J-1)==false
	 && szachownica.wyjscie_poza_tablice(pio.poz.I-2, pio.poz.J-2)==false)
	
	if(szachownica.wyszukajPionek(pio.poz.I-1, pio.poz.J-1).bialy==false &&
	   szachownica.wyszukajPionek(pio.poz.I-1, pio.poz.J-1).brak==false)
	  if(szachownica.wyszukajPionek(pio.poz.I-2, pio.poz.J-2).brak==true)
	    return true;	
    }
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<< czarne >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
  if(pio.bialy==false)
    {
//==========================LEWY DOLNY ROG===============================				
      if(szachownica.wyjscie_poza_tablice(pio.poz.I-1, pio.poz.J-1)==false
	 && szachownica.wyjscie_poza_tablice(pio.poz.I-2, pio.poz.J-2)==false)
	
	if(szachownica.wyszukajPionek(pio.poz.I-1, pio.poz.J-1).bialy==true&&
	   szachownica.wyszukajPionek(pio.poz.I-1, pio.poz.J-1).brak==false)
	  if(szachownica.wyszukajPionek(pio.poz.I-2, pio.poz.J-2).brak==true)
	    return true;	
    } 
//############################ DLA DAMEK ###############################
  if(pio.damka==true)
    {
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<< BIALE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
      if(pio.bialy==true)
	{
//==========================LEWY DOLNY ROG===============================				
	  if(szachownica.wyjscie_poza_tablice(pio.poz.I-1,pio.poz.J-1)==false)
	    for(int i=0; szachownica.wyjscie_poza_tablice(pio.poz.I-2-i,pio.poz.J-2-i)==false; i++)
	      if(szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J-1-i).bialy==false &&
		 szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J-1-i).brak==false)
		if(szachownica.wyszukajPionek(pio.poz.I-2-i, pio.poz.J-2-i).brak==true)
		  return true;	
	}
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< CZARNE >>>>>>>>>>>>>>>>>>>>>>>>>>>>
      if(pio.bialy==false)
	{  
//==========================LEWY DOLNY ROG===============================				
	  if(szachownica.wyjscie_poza_tablice(pio.poz.I-1,pio.poz.J-1)==false)
	    for(int i=0; szachownica.wyjscie_poza_tablice(pio.poz.I-2-i,pio.poz.J-2-i)==false; i++)
	      if(szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J-1-i).bialy==true &&
		 szachownica.wyszukajPionek(pio.poz.I-1-i, pio.poz.J-1-i).brak==false)
		if(szachownica.wyszukajPionek(pio.poz.I-2-i, pio.poz.J-2-i).brak==true)
		  return true;	
	} 
    }
  return false;
}
