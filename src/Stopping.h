/****************************************************************
*                                                               *
* Copyright (C) 2021 Saab Danmark A/S                           *
*                                                               *
* The copyright to the computer program(s) and/or documentation *
* herein is the property of Saab Danmark A/S. The program(s)    *
* and/or documentation may be used and/or copied only with the  *
* written permission of Saab Danmark A/S, or in accordance with *
* the terms and conditions stipulated in the agreement/contract *
* under which the program(s) and/or documentation have been     *
* supplied.                                                     *
*                                                               *
*****************************************************************
*                                                               *
* Information classifications: Not export controlled            *
*                              Company restricted               *
*                              Defence unclassified             *
*                                                               *
****************************************************************/
#ifndef HFSM2SPIKE_STOPPING_H
#define HFSM2SPIKE_STOPPING_H

#include "MachineDeclaration.h"

struct Stopping : public HFSM::State
{
	Stopping() = default;
	~Stopping() = default;
	void enter(Control&);
	void react(const event_stopped&, FullControl&);
	using HFSM::State::react;
};

#endif //HFSM2SPIKE_STOPPING_H
