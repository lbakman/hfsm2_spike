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
#ifndef HFSM2SPIKE_MACHINEDECLARATION_H
#define HFSM2SPIKE_MACHINEDECLARATION_H

#include "StateContext.h"
#include <hfsm2/machine.hpp>

#define STATE(s) struct s

// Declare state machine
using Machine = hfsm2::MachineT<hfsm2::Config::ContextT<StateContext&>>;
using HFSM = Machine::PeerRoot<
		STATE(Idle),
		STATE(Starting),
		STATE(Running),
		STATE(Stopping)
>;

#undef STATE

#endif //HFSM2SPIKE_MACHINEDECLARATION_H
