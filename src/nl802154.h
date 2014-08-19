/*
 * nl802154.h
 *
 * Copyright (C) 2007, 2008, 2009 Siemens AG
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */

#ifndef __LINUX_NL802154_H
#define __LINUX_NL802154_H

#define NL802154_GENL_NAME "nl802154"

/* commands */
/* REQ should be responded with CONF
 * and INDIC with RESP
 */
enum nl802154_commands {
/* don't change the order or add anything between, this is ABI! */
/* Currently we don't shipping this file via uapi, ignore the above one */
	NL802154_CMD_UNSPEC,

	NL802154_CMD_GET_WPAN_PHY,		/* can dump */
	NL802154_CMD_SET_WPAN_PHY,
	NL802154_CMD_NEW_WPAN_PHY,
	NL802154_CMD_DEL_WPAN_PHY,

	NL802154_CMD_GET_INTERFACE,		/* can dump */
	NL802154_CMD_SET_INTERFACE,
	NL802154_CMD_NEW_INTERFACE,
	NL802154_CMD_DEL_INTERFACE,

	/* add new commands above here */

	/* used to define NL802154_CMD_MAX below */
	__NL802154_CMD_AFTER_LAST,
	NL802154_CMD_MAX = __NL802154_CMD_AFTER_LAST - 1
};

enum nl802154_attrs {
/* don't change the order or add anything between, this is ABI! */
/* Currently we don't shipping this file via uapi, ignore the above one */
	NL802154_ATTR_UNSPEC,

	NL802154_ATTR_WPAN_PHY,
	NL802154_ATTR_WPAN_PHY_NAME,

	NL802154_ATTR_IFINDEX,
	NL802154_ATTR_IFNAME,
	NL802154_ATTR_IFTYPE,

	NL802154_ATTR_GENERATION,

	NL802154_ATTR_SUPPORTED_COMMANDS,

	NL802154_ATTR_WPAN_DEV,

	/* add attributes here, update the policy in nl802154.c */

	__NL802154_ATTR_AFTER_LAST,
	NL802154_ATTR_MAX = __NL802154_ATTR_AFTER_LAST - 1
};

enum nl802154_iftype {
	NL802154_IFTYPE_UNSPEC = -1,

	NL802154_IFTYPE_NODE,
	NL802154_IFTYPE_MONITOR,
	NL802154_IFTYPE_COORD,

	/* keep last */
	NUM_NL802154_IFTYPES,
	NL802154_IFTYPE_MAX = NUM_NL802154_IFTYPES - 1
};

#endif /* NL802154_H */