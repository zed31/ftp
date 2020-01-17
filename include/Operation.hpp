#ifndef OPERATION_HPP_
#define OPERATION_HPP_

#include <map>
#include <vector>
#include <functional>
#include <string>

class Operation {
    public:
        Operation();
        std::string doOperation(const std::string& op, const std::string& function_name);
    private:
        std::map<std::string, std::function<std::string(const std::string&)> > operation_;
};

#endif