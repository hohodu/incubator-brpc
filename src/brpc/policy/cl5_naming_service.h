/*******************************************************************
# File Name: cl5_naming_service.h
# Author: hohodu
# mail: hohodu@tencent.com
# Created Time: Tue Aug 25 19:21:33 2020
*******************************************************************/

#ifndef BRPC_POLICY_CL5_NAMING_SERVICE_H
#define BRPC_POLICY_CL5_NAMING_SERVICE_H

#include "brpc/periodic_naming_service.h"

namespace brpc {
namespace policy {

class Cl5NamingService : public PeriodicNamingService {
public:

    int GetServers(const char *service_name,
                    std::vector<ServerNode>* servers);

    void Describe(std::ostream& os, const DescribeOptions&) const;

    NamingService* New() const;

    void Destroy();

};


} // namespace policy 
} // namespace brpc


#endif 

