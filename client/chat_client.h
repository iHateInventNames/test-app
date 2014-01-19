#ifndef CHAT_CLIENT_H
#define CHAT_CLIENT_H

#include "chat_message.hpp"

#include <boost/asio.hpp>

using boost::asio::ip::tcp;

class chat_client {
	boost::asio::io_service& io_service_;
	tcp::socket socket_;
	chat_message read_msg_;
	chat_message_queue write_msgs_;

	void do_connect(tcp::resolver::iterator endpoint_iterator);
	void do_read_header();
	void do_read_body();
	void do_write();

public:
	chat_client(boost::asio::io_service& io_service,
			tcp::resolver::iterator endpoint_iterator);
	void write(const chat_message& msg);
	void close();
};

#endif // CHAT_CLIENT_H
