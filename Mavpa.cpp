#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include "Sempanzr.h"
using namespace std;

void its::trymy(double sum)
{
  	for(int i=1;sum<2000000000;i++){
			sum+=(sum*5/100);
			cout<<2010+i<<"  "<<sum<<endl;
		}
	}
