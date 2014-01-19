/*
 * chat_room.h
 *
 *  Created on: Jan 19, 2014
 *      Author: name
 */

#ifndef CHAT_ROOM_H_
#define CHAT_ROOM_H_

#include "chat_participant.hpp"

#include <set>

//----------------------------------------------------------------------

class chat_room {
	std::set<chat_participant_ptr> participants_;
	enum {
		max_recent_msgs = 100
	};
	chat_message_queue recent_msgs_;

public:
	void join(chat_participant_ptr participant);
	void leave(chat_participant_ptr participant);
	void deliver(const chat_message& msg);
};

#endif /* CHAT_ROOM_H_ */
