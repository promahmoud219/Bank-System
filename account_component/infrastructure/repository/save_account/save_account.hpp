#pragma once
#include "account_component/application/interfaces/IAccountRepository/repo_interface.hpp"

class AccountRepository : public IAccountRepository {

public:
	bool save(const Account& account) override;

};