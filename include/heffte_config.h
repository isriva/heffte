#ifndef HEFFTE_CONFIG_H
#define HEFFTE_CONFIG_H

#define Heffte_VERSION_MAJOR 2
#define Heffte_VERSION_MINOR 3
#define Heffte_VERSION_PATCH 0

#define Heffte_GIT_HASH "b336b610957c8b61cc956a233c7a4b077b299f4e"

#if defined(HEFFTE_ROCFFT)
#define Heffte_ENABLE_ROCM
#define Heffte_DISABLE_GPU_AWARE_MPI
#define Heffte_ENABLE_GPU
#endif

#if defined(HEFFTE_CUFFT)
#define Heffte_ENABLE_CUDA
#define Heffte_DISABLE_GPU_AWARE_MPI
#define Heffte_ENABLE_GPU
#endif

#if defined(HEFFTE_FFTW)
#define Heffte_ENABLE_FFTW
#endif

#endif  /* HEFFTE_CONFIG_H */
