#pragma once

class Product
{
protected:
	Product() { }

public:
	virtual ~Product() { };

public:
	virtual void Execute() = 0;
};
