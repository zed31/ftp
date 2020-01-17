#include <iostream>
#include <algorithm>
#include "../include/buffer.hpp"

Commands::Commands() 
    : command_{ "ABOR", "ACCT", "ADAT", "ALLO", "APPE", "AUTH", "AVBL", "CCC", "CSID", "CDUP", "CONF", "CSID", "CWD", "DEL", "DSID", "DSIZ", "ENC", "EPRT", 
                "EPSV", "FEAT", "HELP", "HOST", "LANG", "LIST", "LPRT", "LPSV", "MDTM", "MFCT", "MFF", "MFMT", "MIC", "MKD", "MLSD", "MLST", "MODE", "NLIST", "NOOP",
                "OPTS", "PASS", "PASV", "PBSV", "PORT", "PROT", "PWD", "QUIT", "REIN", "REST", "RETR", "RMD", "RMDA", "RNFR", "RNTO", "SITE", "SIZE", "SMNT", "SPSV", "STAT", "STOR",
                "STOU", "STRU", "SYST", "THMB", "TYPE", "USER", "XCUP", "XMKD", "XPWD", "XRCP", "XRMD", "XRESQ", "XSEM", "XSEN" } {};

int Commands::addStr(const std::string& line) {
    auto it = std::find(command_.begin(), command_.end(), line);
    if (it == command_.end()) {
        std::cout << "'" << line << "'" << " not found in the command" << std::endl;
        return -1;
    }
    workWithCommand(*it);
    return 0;
}

void Commands::workWithCommand(const std::string& line) {
    std::cout << "work with the command: " << line << std::endl;
}