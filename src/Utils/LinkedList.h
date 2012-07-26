#ifndef UTILS_LINKEDLIST_H
#define UTILS_LINKEDLIST_H


#include <QList>


namespace Utils {

template<class T>
class LinkedList : public QList<T> {
};

} // namespace Utils
#endif
