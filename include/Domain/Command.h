//
// Created by johnathan on 27/05/18.
//

#ifndef VSS_CORE_COMMAND_H
#define VSS_CORE_COMMAND_H

#include <vector>
#include "WheelsCommand.h"

namespace vss {

    class Command {
    public:
        Command();

        int id;
        std::vector<WheelsCommand> commands;
    };

}

#endif //VSS_CORE_COMMAND_H
