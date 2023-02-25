#ifndef IPC_COMMANDS_H
#define IPC_COMMANDS_H

enum marucmds {
    MARUCMD_ATTACH_EXTENT,
    MARUCMD_BIND_ASPECT,
    MARUCMD_DEKEY_ASPECT,
    MARUCMD_DETACH_EXTENT,
    MARUCMD_GET_PARAMETER,
    MARUCMD_KEY_ASPECT,
    MARUCMD_SET_PARAMETER,
    MARUCMD_SYNC,
    MARUCMD_TERMINATE_DAEMON,
    MARUCMD_UNBIND_ASPECT
};

enum maruparams {
    PARAM_IDLE_DETACH,
    PARAM_TTL_DETACH,
    PARAM_EMERGENCY_KEY
};

#endif /* IPC_COMMANDS_H */
