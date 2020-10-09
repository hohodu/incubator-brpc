/*******************************************************************
# File Name: cl5_naming_service.cpp
# Author: hohodu
# mail: hohodu@tencent.com
# Created Time: Tue Aug 25 19:27:05 2020
*******************************************************************/

//#include <qos_client.h>
#include "butil/logging.h"
#include "brpc/policy/cl5_naming_service.h"

namespace brpc {
namespace policy {

int Cl5NamingService::GetServers(const char *service_name,
                                 std::vector<ServerNode>* servers) {

    servers->clear();
 //   QOSREQUEST_RTB rtb;

    return 0;
}

void Cl5NamingService::Describe(
        std::ostream& os, const DescribeOptions&) const {
    os << "cl5";
    return ;
}

NamingService* Cl5NamingService::New() const {
    return new Cl5NamingService;
}

void Cl5NamingService::Destroy() {
    delete this;
}

} // namespace policy
} // namespace brpc




