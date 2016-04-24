/*
 * TelnetServer.h
 *
 *  Created on: 22 de abr de 2016
 *      Author: lucas
 */

#ifndef TELNET_SERVER_TELNETSERVER_H_
#define TELNET_SERVER_TELNETSERVER_H_

#include <stdint.h>

#include "Error/Manager/ErrorManager.h"

namespace ldk {

/**
 * \brief Implementation of Telnet server
 */
class TelnetServer {
public:
    /*
     * \brief Default class constructor
     */
    TelnetServer();

    /*
     * \brief Default class destructor
     */
    ~TelnetServer();

private:
    /**
     *
     */
    uint16_t port_;

    ErrorManager* error_manager_;
};

} /* namespace ldk */

#endif /* TELNET_SERVER_TELNETSERVER_H_ */
