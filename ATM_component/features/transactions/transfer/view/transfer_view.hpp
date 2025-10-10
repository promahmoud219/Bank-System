#pragma once 
#include "ATM_component/shared/base_view.hpp"

class TransferView : public BaseView {
public:
	TransferView() : BaseView("Transfer") {};
	void render() override;
};