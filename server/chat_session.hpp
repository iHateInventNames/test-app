#pragma once

#include "chat_room.hpp"
#include <boost/asio.hpp>

class chat_session: public chat_participant,
		public std::enable_shared_from_this<chat_session> {
	boost::asio::ip::tcp::socket socket_;
	chat_room& room_;
	chat_message read_msg_;
	chat_message_queue write_msgs_;

	void do_read_header();
	void do_read_body();
	void do_write();

public:
	chat_session(boost::asio::ip::tcp::socket socket, chat_room& room);

	void start();

	void deliver(const chat_message& msg);

};
