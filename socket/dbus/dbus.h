//
// Created by zakdelondres on 02/03/18.
//

#ifndef EFICAZD_DBUS_H
#define EFICAZD_DBUS_H

#include <dbus/dbus.h>

struct dbus_socket {
    DBusError err;
    DBusConnection *conn;
} typedef DBusSocket;

DBusSocket ** init_dbus();
dbus_uint32_t dbus_send_signal(struct dbus_socket **ppSock, char **object, char **interface, char **name, char **message);

#endif //EFICAZD_DBUS_H
