/*
 * Copyright (c) 2018 The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */
/**
 * DOC: Declare public API related to the disa called by north bound HDD/OSIF
 */

#ifndef _WLAN_DISA_UCFG_API_H_
#define _WLAN_DISA_UCFG_API_H_

#include "wlan_disa_public_struct.h"
struct wlan_objmgr_psoc;
struct disa_encrypt_decrypt_req_params;


/**
 * ucfg_disa_encrypt_decrypt_req() - Send encrypt/decrypt request to the DISA
 * core
 * @psoc: objmgr psoc object
 * @req: DISA encrypt/decrypt request parameters
 * @cb: Response callback for the encrypt/decrypt request
 * @cookie: Cookie to pass to the response callback
 *
 * Return: QDF status success or failure
 */
QDF_STATUS ucfg_disa_encrypt_decrypt_req(struct wlan_objmgr_psoc *psoc,
		struct disa_encrypt_decrypt_req_params *req,
		encrypt_decrypt_resp_callback cb,
		void *cookie);


#endif /* end  of _WLAN_DISA_UCFG_API_H_ */
