#include <iostream>
#include "Creator.h"

using namespace std;

int main()
{
	unique_ptr<Product> aProduct = Creator::Create(1);
	unique_ptr<Product> bProduct = Creator::Create(2);

	Product* aP = aProduct.get();
	Product* bP = aProduct.get();

	aP->Execute();
	bP->Execute();

	return 0;
}
