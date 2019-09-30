#include "libswresample/resample.h"

void swri_audio_convert_init_aarch64(struct AudioConvert *ac, enum AVSampleFormat out_fmt, enum AVSampleFormat in_fmt, int channels)
{

}

void swri_audio_convert_init_arm(struct AudioConvert *ac, enum AVSampleFormat out_fmt, enum AVSampleFormat in_fmt, int channels)
{

}

void swri_resample_dsp_arm_init(ResampleContext *c)
{

}

void swri_resample_dsp_aarch64_init(ResampleContext *c)
{

}

int ff_resample_common_int16_mmxext(ResampleContext *c, void *dst, const void *src, int sz, int upd)
{
	return -1;
}

int ff_resample_linear_int16_mmxext(ResampleContext *c, void *dst, const void *src, int sz, int upd)
{
	return -1;
}