#include "ProductFactory.h"
#include "../product/ProductA.h"
#include "../product/ProductB.h"

std::unique_ptr<Product> ProductFactory::CreateProduct(int _type)
{
	using namespace std;

	unique_ptr<Product> p;

	switch (_type)
	{
	case 1:
		p = make_unique<ProductA>();
		break;

	case 2:
		p = make_unique<ProductB>();
		break;
	}

	return move(p);
}
