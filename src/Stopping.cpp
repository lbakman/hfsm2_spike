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
#include "Stopping.h"

void Stopping::enter(Control &control)
{
	control.context().checkState(state_enum::STOPPING);
}

void Stopping::react(const event_stopped &, FullControl & control)
{
	control.changeTo<Idle>();
}
