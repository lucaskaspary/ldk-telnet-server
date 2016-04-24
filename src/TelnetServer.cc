/*
 * TelnetServer.cc
 *
 *  Created on: 22 de abr de 2016
 *      Author: lucas
 */

#include "Telnet/Server/TelnetServer.h"


namespace ldk {

#define TELNET_SERVER_ERROR_UNDEFINED_PORT 1000


TelnetServer::TelnetServer()
:port_(0)
{
    error_manager_ = ErrorManager::GetInstance();
}

TelnetServer::~TelnetServer() {
    // TODO Auto-generated destructor stub
}

} /* namespace ldk */
