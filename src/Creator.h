#pragma once

#include "factory/ProductFactory.h"

class Creator
{
public:
	static std::unique_ptr<Product> Create(int type)
	{
		ProductFactory factory;
		std::unique_ptr<Product> product = factory.CreateProduct(type);
		return std::move(product);
	}
};
