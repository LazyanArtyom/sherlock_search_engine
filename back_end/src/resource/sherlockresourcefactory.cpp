#include "sherlockresourcefactory.h"
#include "../utilities/json.h"

#include <sstream>
#include <iomanip>

#include <iostream>

namespace sherlock
{

SherlockResourceFactory::SherlockResourceFactory()
{
    resource_ = std::make_shared<restbed::Resource>();
    resource_->set_path(
        "/{term: [^]+}");

    resource_->set_method_handler("GET", [&](const auto session) { getHandler(session); });
}

std::string SherlockResourceFactory::toJson(float result)
{
    std::ostringstream stream;
    stream << result;

    nlohmann::json jsonResult = { {"result", stream.str()} };
            
    return jsonResult.dump();
}

void SherlockResourceFactory::getHandler(const SessionPtrType session)
{
    const auto term = getPathParameters(session);
    std::cout << "OK: " << term << std::endl;
    auto result = 55.5;
    auto content = toJson(result);
    session->close(restbed::OK, content,
                    {{"Content-Length", std::to_string(content.size())}});
}

SherlockResourceFactory::ResourcePtrType SherlockResourceFactory::getResource() const
{
    return resource_;
}

SherlockResourceFactory::PathParametersType
SherlockResourceFactory::getPathParameters(const SessionPtrType session) const
{
    const auto& request = session->get_request();
    const auto term = request->get_path_parameter("term");

    return term;
}

} // end namespace sherlock