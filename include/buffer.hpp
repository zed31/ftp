#ifndef _BUFFER_HPP_
#define _BUFFER_HPP_

#include <string>
#include <vector>

class buffer {
    public:
        buffer();
        int addStr(const std::string& line);
    private:
        void workWithCommand(const std::string& line); 
    private:
        std::vector<std::string> command_;
};

#endif