#ifndef SHERLOCK_RESOURCE_SHERLOCKRESOURCEFACTORY_H_
#define SHERLOCK_RESOURCE_SHERLOCKRESOURCEFACTORY_H_

#include "resourcefactory.h"

#include <tuple>
#include <string>

namespace sherlock
{

/**
* Every resource factory must prepare an object from the Resource class
* and then deliver it through the getResource function.
*/
class SherlockResourceFactory : public impl::IResourceFactory
{
    using SessionPtrType = std::shared_ptr<restbed::Session>;
    using ResourcePtrType = std::shared_ptr<restbed::Resource>;
    using PathParametersType = std::string;
    
public:
    SherlockResourceFactory();

    std::string toJson(float result);

    /**
    * Every Resource object must have a handler which is called when resource is requested by a client.
    * We can set method handler of Resource object through set_method_handler function: 
    */
    void getHandler(const SessionPtrType session);

    ResourcePtrType getResource() const override final;

    /**
    * Function to get the values of labels in the url which is requested.
    */
    PathParametersType getPathParameters(const SessionPtrType session) const;

private:
    ResourcePtrType resource_;
};

} // end namespace sherlock
#endif // SHERLOCK_RESOURCE_SHERLOCKRESOURCEFACTORY_H_