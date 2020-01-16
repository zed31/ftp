#ifndef _BUFFER_HPP_
#define _BUFFER_HPP_

#include <string>
#include <vector>

class buffer {
    public:
        void addStr(const std::string& line);
    private:
        std::vector<std::string> content_;
};

#endif