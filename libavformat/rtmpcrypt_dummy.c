#include "libavformat/url.h"

int ff_rtmpe_gen_pub_key(URLContext *h, uint8_t *buf) { return -1; }
int ff_rtmpe_compute_secret_key(URLContext *h, const uint8_t *serverdata, const uint8_t *clientdata, int type) { return -1; }
void ff_rtmpe_encrypt_sig(URLContext *h, uint8_t *signature, const uint8_t *digest, int type) {}
int ff_rtmpe_update_keystream(URLContext *h) { return -1; }