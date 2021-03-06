#ifndef _DRIVERS_PLATFORM_X86_CHROMEOS_ACPI_H
#define _DRIVERS_PLATFORM_X86_CHROMEOS_ACPI_H

#include <linux/types.h>

#define NVRAM_BYTES (128 - NVRAM_FIRST_BYTE) /* from drivers/char/nvram.c */

#define CHNV_DEBUG_RESET_FLAG	0x40	     /* flag for S3 reboot */
#define CHNV_RECOVERY_FLAG	0x80	     /* flag for recovery reboot */

#define CHSW_RECOVERY_FW	0x00000002   /* recovery button depressed */
#define CHSW_RECOVERY_EC	0x00000004   /* recovery button depressed */
#define CHSW_DEVELOPER_MODE	0x00000020   /* developer switch set */
#define CHSW_WP			0x00000200   /* write-protect (optional) */

/*
 * Structure containing one ACPI exported integer along with the validity
 * flag.
 */
struct chromeos_acpi_datum {
	unsigned cad_value;
	bool	 cad_is_set;
};

/*
 * Structure containing the set of ACPI exported integers required by chromeos
 * wrapper.
 */
struct chromeos_acpi_if {
	struct chromeos_acpi_datum	switch_state;

	/* chnv is a single byte offset in nvram. exported by older firmware */
	struct chromeos_acpi_datum	chnv;

	/* vbnv is an address range in nvram, exported by newer firmware */
	struct chromeos_acpi_datum	nv_base;
	struct chromeos_acpi_datum	nv_size;
};


extern struct chromeos_acpi_if chromeos_acpi_if_data;

#endif /* _DRIVERS_PLATFORM_X86_CHROMEOS_ACPI_H */
