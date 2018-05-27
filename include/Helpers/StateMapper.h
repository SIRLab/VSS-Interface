//
// Created by johnathan on 27/05/18.
//

#ifndef VSS_CORE_STATEMAPPER_H
#define VSS_CORE_STATEMAPPER_H

#include <state.pb.h>
#include "Domain/State.h"
#include "Domain/Robot.h"
#include "Domain/Ball.h"

namespace vss {
    namespace StateMapper {
        State globalStateToState(vss_state::Global_State globalState);
        Robot robotStateToRobot(vss_state::Robot_State robotState);
        Ball ballStateToBall(vss_state::Ball_State ballState);
        vss_state::Global_State stateToGlobalState(State state);
        vss_state::Robot_State robotToRobotState(Robot robot);
        vss_state::Ball_State ballToBallState(Ball ball);
    }
}

#endif //VSS_CORE_STATEMAPPER_H
