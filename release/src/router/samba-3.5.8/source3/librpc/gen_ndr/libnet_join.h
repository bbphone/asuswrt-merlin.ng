/* header auto-generated by pidl */

#include <stdint.h>

#include "libcli/util/ntstatus.h"

#include "librpc/gen_ndr/wkssvc.h"
#include "librpc/gen_ndr/security.h"
#ifndef _HEADER_libnetjoin
#define _HEADER_libnetjoin


struct libnet_JoinCtx {
	struct {
		const char * dc_name;
		const char * machine_name;
		const char * domain_name;/* [ref] */
		const char * account_ou;
		const char * admin_account;
		const char * admin_password;
		const char * machine_password;
		uint32_t join_flags;
		const char * os_version;
		const char * os_name;
		uint8_t create_upn;
		const char * upn;
		uint8_t modify_config;
		struct ads_struct *ads;/* [ref] */
		uint8_t debug;
		uint8_t use_kerberos;
		enum netr_SchannelType secure_channel_type;
		struct messaging_context *msg_ctx;/* [noprint,ref] */
	} in;

	struct {
		const char * account_name;
		const char * netbios_domain_name;
		const char * dns_domain_name;
		const char * forest_name;
		const char * dn;
		struct dom_sid *domain_sid;/* [ref] */
		uint8_t modified_config;
		const char * error_string;
		uint8_t domain_is_ad;
		WERROR result;
	} out;

};


struct libnet_UnjoinCtx {
	struct {
		const char * dc_name;
		const char * machine_name;
		const char * domain_name;
		const char * account_ou;
		const char * admin_account;
		const char * admin_password;
		const char * machine_password;
		uint32_t unjoin_flags;
		uint8_t delete_machine_account;
		uint8_t modify_config;
		struct dom_sid *domain_sid;/* [ref] */
		struct ads_struct *ads;/* [ref] */
		uint8_t debug;
		uint8_t use_kerberos;
		struct messaging_context *msg_ctx;/* [noprint,ref] */
	} in;

	struct {
		const char * netbios_domain_name;
		const char * dns_domain_name;
		const char * forest_name;
		uint8_t modified_config;
		const char * error_string;
		uint8_t disabled_machine_account;
		uint8_t deleted_machine_account;
		WERROR result;
	} out;

};

#endif /* _HEADER_libnetjoin */
