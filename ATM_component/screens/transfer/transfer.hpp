// transfer.hpp

#pragma once 

class Transfer : public Screen {
public:
	Transfer() : Screen("Transfer") {};
	void show() override;
};