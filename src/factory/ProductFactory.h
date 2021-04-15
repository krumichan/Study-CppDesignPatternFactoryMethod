#pragma once

#include "../template/AbstractProduct.h"
#include <memory>

class ProductFactory
{
public:
	std::unique_ptr<Product> CreateProduct(int);

};
