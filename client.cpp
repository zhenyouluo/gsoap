#include "soapcalcProxy.h"
#include "calc.nsmap"
#include <string>

int main(int argc,char **argv)
{
	if(argc < 3)
	{
		std::cout<<"usge:"<<argv[0]<<" num1 num2"<<std::endl;
		return 1;
	}

    calcProxy service;
	double result;
	if(service.add(std::stod(argv[1]),std::stod(argv[2]),result) == SOAP_OK)
		std::cout<<"result:"<<result<<std::endl;
	else
		service.soap_stream_fault(std::cerr);
	return 0;
}
