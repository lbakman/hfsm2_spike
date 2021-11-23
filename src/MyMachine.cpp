#include <iostream>
#include "MyMachine.h"

MyMachine::MyMachine() : _name("My Machine"), _machine(*this)
{
	_machine.react(action_start{});
	_machine.react(event_started{});

	_machine.react(action_stop{});
	_machine.react(event_stopped{});
}

MyMachine::~MyMachine() = default;

std::string MyMachine::toString() const
{
	return _name;
}

void MyMachine::checkState(state_enum state)
{
	std::cout << _name << ": " << to_string(state) << std::endl;
}
