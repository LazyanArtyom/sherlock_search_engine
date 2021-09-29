#ifndef SHERLOCK_RESOURCE_RESOURCEFACTORY_H_
#define SHERLOCK_RESOURCE_RESOURCEFACTORY_H_

#include <memory>
#include <restbed>

namespace sherlock {
namespace impl {

/**
* The fundamental concept in any RESTful API is the resource.
* A resource is an object with a type, associated data, relationships to other resources, 
* and a set of methods (corresponding to the standard HTTP GET, POST, PUT and DELETE methods) that operate on it.
*/
class IResourceFactory
{
    using ResourcePtrType = std::shared_ptr<restbed::Resource>;

public:
    /**
    * Every resource factory concrete class must prepare resource and finally deliver to the its customer
    * through getResource function, in more details means concrete classes must create an object from 
    * Resource class and then implement all functions which it needs then bind functions to the Resource object 
    * and finally return Resource object in the get_resource function.
    */
    virtual ResourcePtrType getResource() const = 0;
};

} // end namespace impl
} // end namespace sherlock
#endif // SHERLOCK_RESOURCE_RESOURCEFACTORY_H_