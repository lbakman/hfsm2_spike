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
#ifndef HFSM2SPIKE_COMMON_H
#define HFSM2SPIKE_COMMON_H

#include <string>

enum class state_enum {
	IDLE,
	STARTING,
	RUNNING,
	STOPPING
};

inline std::string to_string(state_enum state) noexcept
{
	switch (state) {
		case state_enum::IDLE:
			return "IDLE";
		case state_enum::STARTING:
			return "STARTING";
		case state_enum::RUNNING:
			return "RUNNING";
		case state_enum::STOPPING:
			return "STOPPING";
	}

	return "Unknown";

}

struct action_start {};
struct action_stop {};

struct event_started {};
struct event_stopped {};

#endif //HFSM2SPIKE_COMMON_H
