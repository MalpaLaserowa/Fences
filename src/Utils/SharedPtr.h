#ifndef UTILS_SHAREDPTR_H
#define UTILS_SHAREDPTR_H


#include <memory>


namespace Utils {

template<class T>
class SharedPtr : public std::shared_ptr<T> {
};

} // namespace Utils
#endif
