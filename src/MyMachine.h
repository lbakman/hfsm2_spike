#pragma once

#include <string>
#include "HFSM.h"
#include "TestContext.h"

class MyMachine final : private StateContext {
public:
	MyMachine();
	~MyMachine() override;

	std::string toString() const;

private:
	void checkState(state_enum state) override;

	std::string _name;
	HFSM::Instance _machine;
};
