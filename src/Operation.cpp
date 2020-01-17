#include <iostream>
#include <algorithm>
#include "Operation.hpp"

Operation::Operation() : operation_{
    {"ABOR", [&](const std::string&) -> std::string { return "ok"; } },
    {"ACCT", [&](const std::string&) -> std::string { return "ok"; } },
    {"ADAT", [&](const std::string&) -> std::string { return "ok"; } },
    {"ALLO", [&](const std::string&) -> std::string { return "ok"; } },
    {"APPE", [&](const std::string&) -> std::string { return "ok"; } },
    {"AUTH", [&](const std::string&) -> std::string { return "ok"; } },
    {"AVBL", [&](const std::string&) -> std::string { return "ok"; } },
    {"CCC",  [&](const std::string&) -> std::string { return "ok"; } },
    {"CSID", [&](const std::string&) -> std::string { return "ok"; } },
    {"CDUP", [&](const std::string&) -> std::string { return "ok"; } },
    {"CONF", [&](const std::string&) -> std::string { return "ok"; } },
    {"CSID", [&](const std::string&) -> std::string { return "ok"; } },
    {"CWD",  [&](const std::string&) -> std::string { return "ok"; } },
    {"DEL",  [&](const std::string&) -> std::string { return "ok"; } },
    {"DSIZ", [&](const std::string&) -> std::string { return "ok"; } },
    {"ENC",  [&](const std::string&) -> std::string { return "ok"; } },
    {"EPRT", [&](const std::string&) -> std::string { return "ok"; } },
    {"EPSV", [&](const std::string&) -> std::string { return "ok"; } },
    {"FEAT", [&](const std::string&) -> std::string { return "ok"; } },
    {"HELP", [&](const std::string&) -> std::string { return "ok"; } },
    {"HOST", [&](const std::string&) -> std::string { return "ok"; } },
    {"LANG", [&](const std::string&) -> std::string { return "ok"; } },
    {"LIST", [&](const std::string&) -> std::string { return "ok"; } },
    {"LPRT", [&](const std::string&) -> std::string { return "ok"; } },
    {"LPSV", [&](const std::string&) -> std::string { return "ok"; } },
    {"MDTM", [&](const std::string&) -> std::string { return "ok"; } },
    {"MFCT", [&](const std::string&) -> std::string { return "ok"; } },
    {"MFF",  [&](const std::string&) -> std::string { return "ok"; } },
    {"MFMT", [&](const std::string&) -> std::string { return "ok"; } },
    {"MIK",  [&](const std::string&) -> std::string { return "ok"; } },
    {"MLSD", [&](const std::string&) -> std::string { return "ok"; } },
    {"MFMT", [&](const std::string&) -> std::string { return "ok"; } },
    {"MIC",  [&](const std::string&) -> std::string { return "ok"; } },
    {"MKD",  [&](const std::string&) -> std::string { return "ok"; } },
    {"MLSD", [&](const std::string&) -> std::string { return "ok"; } },
    {"MLST", [&](const std::string&) -> std::string { return "ok"; } },
    {"MODE", [&](const std::string&) -> std::string { return "ok"; }},
    {"NLIST", [&](const std::string&) -> std::string { return "ok"; } },
    {"NOOP", [&](const std::string&) -> std::string { return "ok"; } },
    {"OPTS", [&](const std::string&) -> std::string { return "ok"; } },
    {"PASS", [&](const std::string&) -> std::string { return "ok"; } },
    {"PASV", [&](const std::string&) -> std::string { return "ok"; } },
    {"PBSV", [&](const std::string&) -> std::string { return "ok"; } },
    {"PORT", [&](const std::string&) -> std::string { return "ok"; } },
    {"PROT", [&](const std::string&) -> std::string { return "ok"; } },
    {"PWD", [&](const std::string&) -> std::string { return "ok"; } },
    {"QUIT", [&](const std::string&) -> std::string { return "ok"; } },
    {"REIN", [&](const std::string&) -> std::string { return "ok"; } },
    {"REST", [&](const std::string&) -> std::string { return "ok"; } },
    {"RMD", [&](const std::string&) -> std::string { return "ok"; } },
    {"RMDA", [&](const std::string&) -> std::string { return "ok"; } },
    {"RNFR", [&](const std::string&) -> std::string { return "ok"; } },
    {"RNTO", [&](const std::string&) -> std::string { return "ok"; } },
    {"SITE", [&](const std::string&) -> std::string { return "ok"; } },
    {"SIZE", [&](const std::string&) -> std::string { return "ok"; } },
    {"SMNT", [&](const std::string&) -> std::string { return "ok"; } },
    {"SPSV", [&](const std::string&) -> std::string { return "ok"; } },
    {"STAT", [&](const std::string&) -> std::string { return "ok"; } },
    {"STOR", [&](const std::string&) -> std::string { return "ok"; } },
    {"STOU", [&](const std::string&) -> std::string { return "ok"; } },
    {"STRU", [&](const std::string&) -> std::string { return "ok"; } },
    {"SYST", [&](const std::string&) -> std::string { return "ok"; } },
    {"THMB", [&](const std::string&) -> std::string { return "ok"; } },
    {"TYPE", [&](const std::string&) -> std::string { return "ok"; } },
    {"USER", [&](const std::string&) -> std::string { return "ok"; } },
    {"XCUP", [&](const std::string&) -> std::string { return "ok"; } },
    {"XMKD", [&](const std::string&) -> std::string { return "ok"; } },
    {"XRCP", [&](const std::string&) -> std::string { return "ok"; } },
    {"XRMD", [&](const std::string&) -> std::string { return "ok"; } },
    {"XRESQ", [&](const std::string&) -> std::string { return "ok"; }},
    {"XSEN", [&](const std::string&) -> std::string { return "ok"; }},
    {"XSEM", [&](const std::string&) -> std::string { return "ok"; }} 
} {}

std::string Operation::doOperation(const std::string& op, const std::string& function_name) {
    std::cout << "Operation set to " << op << function_name << std::endl;
    auto it = operation_.find(function_name);
    if (it == operation_.end()) {
        it->second(op);
        return "";
    }
    return "";
}