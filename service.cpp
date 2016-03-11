#include "soapcalcService.h"
#include "calc.nsmap"

int main()
{
	calcService server;
	return server.serve();
}


