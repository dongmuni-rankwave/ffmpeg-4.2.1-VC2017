#include "libavcodec/avcodec.h"
#include "libavcodec/aac.h"
#include "libavcodec/aacenc.h"
#include "libavcodec/ac3dsp.h"
#include "libavcodec/acelp_filters.h"
#include "libavcodec/acelp_vectors.h"
#include "libavcodec/hpeldsp.h"
#include "libavcodec/mpegvideo.h"
#include "libavcodec/vp8dsp.h"
#include "libavcodec/audiodsp.h"
#include "libavcodec/celp_filters.h"
#include "libavcodec/celp_math.h"
#include "libavcodec/flacdsp.h"
#include "libavcodec/fmtconvert.h"
#include "libavcodec/g722dsp.h"
#include "libavcodec/h264qpel.h"
#include "libavcodec/hevcdsp.h"
#include "libavcodec/hevcpred.h"
#include "libavcodec/iirfilter.h"
#include "libavcodec/lossless_audiodsp.h"
#include "libavcodec/lossless_videodsp.h"
#include "libavcodec/mlpdsp.h"
#include "libavcodec/mpegaudiodsp.h"
#include "libavcodec/opusdsp.h"
#include "libavcodec/rv34dsp.h"
#include "libavcodec/sbcdsp.h"
#include "libavcodec/svq1enc.h"
#include "libavcodec/synth_filter.h"
#include "libavcodec/vc1dsp.h"
#include "libavcodec/vorbisdsp.h"
#include "libavcodec/vp3dsp.h"
#include "libavcodec/vp56dsp.h"
#include "libavcodec/vp9dsp.h"
#include "libavcodec/wmv2dsp.h"
#include "libavcodec/h264dsp.h"
#include "libavcodec/h264pred.h"

void ff_aacdec_init_mips(AACContext *c) {}
void ff_aac_coder_init_mips(AACEncContext *c) {}
void ff_psdsp_init_arm(PSDSPContext *s) {}
void ff_psdsp_init_aarch64(PSDSPContext *s) {}
void ff_psdsp_init_mips(PSDSPContext *s) {}
void ff_aacsbr_func_ptr_init_mips(AACSBRContext *c) {}
void ff_ac3dsp_init_arm(AC3DSPContext *c, int bit_exact) {}
void ff_ac3dsp_init_mips(AC3DSPContext *c, int bit_exact) {}
void ff_acelp_filter_init_mips(ACELPFContext *c) {}
void ff_acelp_vectors_init_mips(ACELPVContext *c) {}
void ff_hpeldsp_init_armv6(HpelDSPContext *c, int flags) {}
void ff_mpv_common_init_armv5te(MpegEncContext *s) {}
void ff_videodsp_init_armv5te(VideoDSPContext* ctx, int bpc) {}
void ff_vp78dsp_init_armv6(VP8DSPContext *dsp) {}
void ff_vp8dsp_init_armv6(VP8DSPContext *dsp) {}
void ff_audiodsp_init_arm(AudioDSPContext *c) {}
void ff_audiodsp_init_ppc(AudioDSPContext *c) {}
void ff_blockdsp_init_alpha(BlockDSPContext *c) {}
void ff_blockdsp_init_arm(BlockDSPContext *c) {}
void ff_blockdsp_init_ppc(BlockDSPContext *c) {}
void ff_blockdsp_init_mips(BlockDSPContext *c) {}
void ff_celp_filter_init_mips(CELPFContext *c) {}
void ff_celp_math_init_mips(CELPMContext *c) {}
void ff_fft_init_aarch64(FFTContext *s) {}
void ff_fft_init_arm(FFTContext *s) {}
void ff_fft_init_mips(FFTContext *s) {}
void ff_fft_init_ppc(FFTContext *s) {}
void ff_fft_fixed_init_arm(FFTContext *s) {}
void ff_flacdsp_init_arm(FLACDSPContext *c, enum AVSampleFormat fmt, int channels, int bps) {}
void ff_fmt_convert_init_aarch64(FmtConvertContext *c, AVCodecContext *avctx) {}
void ff_fmt_convert_init_arm(FmtConvertContext *c, AVCodecContext *avctx) {}
void ff_fmt_convert_init_ppc(FmtConvertContext *c, AVCodecContext *avctx) {}
void ff_fmt_convert_init_mips(FmtConvertContext *c) {}
void ff_g722dsp_init_arm(G722DSPContext *c) {}
void ff_h263dsp_init_mips(H263DSPContext *ctx) {}
void ff_h264chroma_init_aarch64(H264ChromaContext *c, int bit_depth) {}
void ff_h264chroma_init_arm(H264ChromaContext *c, int bit_depth) {}
void ff_h264chroma_init_ppc(H264ChromaContext *c, int bit_depth) {}
void ff_h264chroma_init_mips(H264ChromaContext *c, int bit_depth) {}
void ff_h264qpel_init_aarch64(H264QpelContext *c, int bit_depth) {}
void ff_h264qpel_init_arm(H264QpelContext *c, int bit_depth) {}
void ff_h264qpel_init_ppc(H264QpelContext *c, int bit_depth) {}
void ff_h264qpel_init_mips(H264QpelContext *c, int bit_depth) {}
void ff_hevc_dsp_init_arm(HEVCDSPContext *c, const int bit_depth) {}
void ff_hevc_dsp_init_ppc(HEVCDSPContext *c, const int bit_depth) {}
void ff_hevc_dsp_init_mips(HEVCDSPContext *c, const int bit_depth) {}
void ff_hevc_pred_init_mips(HEVCPredContext *hpc, int bit_depth) {}
void ff_hpeldsp_init_aarch64(HpelDSPContext *c, int flags) {}
void ff_hpeldsp_init_alpha(HpelDSPContext *c, int flags) {}
void ff_hpeldsp_init_arm(HpelDSPContext *c, int flags) {}
void ff_hpeldsp_init_ppc(HpelDSPContext *c, int flags) {}
void ff_hpeldsp_init_mips(HpelDSPContext *c, int flags) {}
void ff_iir_filter_init_mips(FFIIRFilterContext *f) {}
void ff_llauddsp_init_arm(LLAudDSPContext *c) {}
void ff_llauddsp_init_ppc(LLAudDSPContext *c) {}
void ff_llviddsp_init_ppc(LLVidDSPContext *llviddsp) {}
void ff_me_cmp_init_alpha(MECmpContext *c, AVCodecContext *avctx) {}
void ff_me_cmp_init_arm(MECmpContext *c, AVCodecContext *avctx) {}
void ff_me_cmp_init_ppc(MECmpContext *c, AVCodecContext *avctx) {}
void ff_me_cmp_init_mips(MECmpContext *c, AVCodecContext *avctx) {}
void ff_mlpdsp_init_arm(MLPDSPContext *c) {}
void ff_mpadsp_init_aarch64(MPADSPContext *s) {}
void ff_mpadsp_init_arm(MPADSPContext *s) {}
void ff_mpadsp_init_ppc(MPADSPContext *s) {}
void ff_mpadsp_init_mipsfpu(MPADSPContext *s) {}
void ff_mpadsp_init_mipsdsp(MPADSPContext *s) {}
void ff_mpv_common_init_arm(MpegEncContext *s) {}
void ff_mpv_common_init_axp(MpegEncContext *s) {}
void ff_mpv_common_init_neon(MpegEncContext *s) {}
void ff_mpv_common_init_ppc(MpegEncContext *s) {}
void ff_mpv_common_init_mips(MpegEncContext *s) {}
void ff_mpegvideodsp_init_ppc(MpegVideoDSPContext *c) {}
void ff_opus_dsp_init_aarch64(OpusDSP *ctx) {}
void ff_qpeldsp_init_mips(QpelDSPContext *c) {}
void ff_rdft_init_arm(RDFTContext *s) {}
void ff_rv34dsp_init_arm(RV34DSPContext *c) {}
void ff_rv40dsp_init_aarch64(RV34DSPContext *c) {}
void ff_rv40dsp_init_arm(RV34DSPContext *c) {}
void ff_sbcdsp_init_arm(SBCDSPContext *s) {}
void ff_sbrdsp_init_arm(SBRDSPContext *s) {}
void ff_sbrdsp_init_aarch64(SBRDSPContext *s) {}
void ff_sbrdsp_init_mips(SBRDSPContext *s) {}
void ff_svq1enc_init_ppc(SVQ1EncContext *c) {}
void ff_synth_filter_init_aarch64(SynthFilterContext *c) {}
void ff_synth_filter_init_arm(SynthFilterContext *c) {}
void ff_vc1dsp_init_aarch64(VC1DSPContext* dsp) {}
void ff_vc1dsp_init_arm(VC1DSPContext* dsp) {}
void ff_vc1dsp_init_ppc(VC1DSPContext *c) {}
void ff_vc1dsp_init_mips(VC1DSPContext* dsp) {}
void ff_videodsp_init_aarch64(VideoDSPContext *ctx, int bpc) {}
void ff_videodsp_init_arm(VideoDSPContext *ctx, int bpc) {}
void ff_videodsp_init_ppc(VideoDSPContext *ctx, int bpc) {}
void ff_videodsp_init_mips(VideoDSPContext *ctx, int bpc) {}
void ff_vorbisdsp_init_aarch64(VorbisDSPContext *dsp) {}
void ff_vorbisdsp_init_arm(VorbisDSPContext *dsp) {}
void ff_vorbisdsp_init_ppc(VorbisDSPContext *dsp) {}
void ff_vp3dsp_init_arm(VP3DSPContext *c, int flags) {}
void ff_vp3dsp_init_ppc(VP3DSPContext *c, int flags) {}
void ff_vp3dsp_init_mips(VP3DSPContext *c, int flags) {}
void ff_vp6dsp_init_arm(VP56DSPContext *s) {}
void ff_vp78dsp_init_aarch64(VP8DSPContext *c) {}
void ff_vp78dsp_init_arm(VP8DSPContext *c) {}
void ff_vp78dsp_init_ppc(VP8DSPContext *c) {}
void ff_vp8dsp_init_aarch64(VP8DSPContext *c) {}
void ff_vp8dsp_init_arm(VP8DSPContext *c) {}
void ff_vp8dsp_init_mips(VP8DSPContext *c) {}
void ff_vp9dsp_init_aarch64(VP9DSPContext *dsp, int bpp) {}
void ff_vp9dsp_init_arm(VP9DSPContext *dsp, int bpp) {}
void ff_vp9dsp_init_mips(VP9DSPContext *dsp, int bpp) {}
void ff_wmv2dsp_init_mips(WMV2DSPContext *c) {}
void ff_fdct_mmx(int16_t *block) {}
void ff_fdct_mmxext(int16_t *block) {}
void ff_fdct_sse2(int16_t *block) {}
void ff_vc1dsp_init_mmx(VC1DSPContext *dsp) {}
void ff_vc1dsp_init_mmxext(VC1DSPContext *dsp) {}
void ff_xvmc_init_block(MpegEncContext *s) {}
void ff_xvmc_pack_pblocks(MpegEncContext *s, int cbp) {}
void ff_idctdsp_init_armv5te(IDCTDSPContext *c, AVCodecContext *avctx, unsigned high_bit_depth) {}
void ff_idctdsp_init_armv6(IDCTDSPContext *c, AVCodecContext *avctx, unsigned high_bit_depth) {}
void ff_idctdsp_init_aarch64(IDCTDSPContext *c, AVCodecContext *avctx, unsigned high_bit_depth) {}
void ff_idctdsp_init_alpha(IDCTDSPContext *c, AVCodecContext *avctx, unsigned high_bit_depth) {}
void ff_idctdsp_init_arm(IDCTDSPContext *c, AVCodecContext *avctx, unsigned high_bit_depth) {}
void ff_idctdsp_init_ppc(IDCTDSPContext *c, AVCodecContext *avctx, unsigned high_bit_depth) {}
void ff_idctdsp_init_mips(IDCTDSPContext *c, AVCodecContext *avctx, unsigned high_bit_depth) {}
void ff_fdctdsp_init_ppc(FDCTDSPContext *c, AVCodecContext *avctx, unsigned high_bit_depth) {}
void ff_h264dsp_init_aarch64(H264DSPContext *c, const int bit_depth, const int chroma_format_idc) {}
void ff_h264dsp_init_arm(H264DSPContext *c, const int bit_depth, const int chroma_format_idc) {}
void ff_h264dsp_init_ppc(H264DSPContext *c, const int bit_depth, const int chroma_format_idc) {}
void ff_h264dsp_init_mips(H264DSPContext *c, const int bit_depth, const int chroma_format_idc) {}
void ff_h264_pred_init_aarch64(H264PredContext *h, int codec_id, const int bit_depth, const int chroma_format_idc) {}
void ff_h264_pred_init_arm(H264PredContext *h, int codec_id, const int bit_depth, const int chroma_format_idc) {}
void ff_h264_pred_init_mips(H264PredContext *h, int codec_id, const int bit_depth, const int chroma_format_idc) {}
void ff_mpegvideoencdsp_init_arm(MpegvideoEncDSPContext *c, AVCodecContext *avctx) {}
void ff_mpegvideoencdsp_init_ppc(MpegvideoEncDSPContext *c, AVCodecContext *avctx) {}
void ff_mpegvideoencdsp_init_mips(MpegvideoEncDSPContext *c, AVCodecContext *avctx) {}
void ff_pixblockdsp_init_alpha(PixblockDSPContext *c, AVCodecContext *avctx, unsigned high_bit_depth) {}
void ff_pixblockdsp_init_arm(PixblockDSPContext *c, AVCodecContext *avctx, unsigned high_bit_depth) {}
void ff_pixblockdsp_init_ppc(PixblockDSPContext *c, AVCodecContext *avctx, unsigned high_bit_depth) {}
void ff_pixblockdsp_init_mips(PixblockDSPContext *c, AVCodecContext *avctx, unsigned high_bit_depth) {}
void ff_xvid_idct_init_mips(IDCTDSPContext *c, AVCodecContext *avctx, unsigned high_bit_depth) {}
void ff_flac_enc_lpc_16_sse4(int32_t *res, const int32_t *smp, int len, int order, const int32_t coefs[32], int shift) {}
void ff_add_int16_mmx(uint16_t *dst, const uint16_t *src, unsigned mask, int w) {}
void ff_add_hfyu_left_pred_bgr32_mmx(uint8_t *dst, const uint8_t *src, intptr_t w, uint8_t *left) {}
void ff_diff_int16_mmx(uint16_t *dst, const uint16_t *src1, const uint16_t *src2, unsigned mask, int w) {}
void ff_add_bytes_mmx(uint8_t *dst, uint8_t *src, ptrdiff_t w) {}
void ff_add_median_pred_mmxext(uint8_t *dst, const uint8_t *top, const uint8_t *diff, ptrdiff_t w, int *left, int *left_top) {}
void ff_diff_bytes_mmx(uint8_t *dst, const uint8_t *src1, const uint8_t *src2, intptr_t w) {}
void ff_rv34_idct_dc_add_mmx(uint8_t *dst, ptrdiff_t stride, int dc) {}
void ff_lfe_fir0_float_sse(float *pcm_samples, int32_t *lfe_samples, const float *filter_coeff, ptrdiff_t npcmblocks) {}
