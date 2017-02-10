#include <stdio.h>

#include "agent.h"
#include "order.h"


int main()
{
  Agent *a = new Agent();
  Order *o = new Order(a,12.0,12.0,true);
  delete o;
  delete a;
  return(0);
}
